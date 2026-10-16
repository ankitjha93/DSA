/**
 * ============================================================================
 * Problem:     Subarrays Distinct Element Sum of Squares II
 * Platform:    LeetCode (Hard #2916)
 * Date:        2026-10-16
 * Difficulty:  Hard
 * Topic:       Segment Tree, Lazy Propagation, Math, Hash Table
 * Link:        https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-ii/
 * ============================================================================
 * Approach:
 * - When advancing the right endpoint from j - 1 to j:
 *   For every start index i in [last_pos[nums[j]] + 1, j], the count of distinct
 *   elements c_i increases by 1.
 * - For each subarray, the contribution changes from c_i^2 to (c_i + 1)^2.
 *   Expanding: (c_i + 1)^2 = c_i^2 + 2 * c_i + 1.
 *   Summing over a range of length 'gap':
 *     new_sum = sum + 1 * gap
 *     new_sqr = sqr + 2 * sum + 1^2 * gap
 * - We maintain a Segment Tree with Lazy Propagation supporting range addition
 *   of 1 and querying the total sum of squares (tree.sqr[0]).
 * - Total answer is accumulated at each index j modulo 1e9+7.
 *
 * Complexity:
 * - Time Complexity:  O(N log N)
 * - Space Complexity: O(N) (4N segment tree nodes + last_pos array)
 * ============================================================================
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int MOD = 1e9 + 7;

struct SegmentTree {    
    vector<ll> lzy;
    vector<ll> sum;
    vector<ll> sqr;
    int n;

    SegmentTree(int _n) : n(_n) {
        lzy.resize(4 * n, 0);
        sum.resize(4 * n, 0);
        sqr.resize(4 * n, 0);
    }
    
    void update_lzy(int l, int r, int i) {
        if (l != r) {
            lzy[i * 2 + 1] += lzy[i];
            lzy[i * 2 + 2] += lzy[i];
        }
        ll gap = r - l + 1;
        ll new_sum = sum[i] + lzy[i] * gap;
        ll new_sqr = sqr[i] + lzy[i] * sum[i] * 2 + lzy[i] * lzy[i] * gap;
        
        sum[i] = new_sum % MOD;
        sqr[i] = new_sqr % MOD;
        lzy[i] = 0;
    }
    
    void AddOne(int x, int y, int l = 0, int r = -1, int i = 0) {
        if (r == -1) r += n;
        update_lzy(l, r, i);
        
        if (r < x || l > y) return;
        if (l >= x && r <= y) {
            lzy[i] = 1;
            return update_lzy(l, r, i);
        }
        
        int m = (l + r) >> 1;
        AddOne(x, y, l, m, i * 2 + 1);
        AddOne(x, y, m + 1, r, i * 2 + 2);
        
        sum[i] = (sum[i * 2 + 1] + sum[i * 2 + 2]) % MOD;
        sqr[i] = (sqr[i * 2 + 1] + sqr[i * 2 + 2]) % MOD;
    }    
};

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        vector<int> last_pos(100001, -1);
        
        SegmentTree tree(n);
        int ans = 0;
        
        for (int j = 0; j < n; j++) {            
            int st = last_pos[nums[j]] + 1, ed = j;
            tree.AddOne(st, ed);
            
            ans = (ans + tree.sqr[0]) % MOD;
            
            last_pos[nums[j]] = j;
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;

    vector<int> nums1 = {1, 2, 1};
    int ans1 = sol.sumCounts(nums1);
    cout << "Input: [1, 2, 1] -> Output: " << ans1 << " (Expected: 15)\n";

    vector<int> nums2 = {2, 2, 5, 5};
    int ans2 = sol.sumCounts(nums2);
    cout << "Input: [2, 2, 5, 5] -> Output: " << ans2 << " (Expected: 22)\n";

    return 0;
}
