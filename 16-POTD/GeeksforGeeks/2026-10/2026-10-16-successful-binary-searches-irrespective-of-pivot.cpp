/**
 * ============================================================================
 * Problem:     Successful Binary Searches Irrespective of Pivot
 * Platform:    GeeksforGeeks
 * Date:        2026-10-16
 * Difficulty:  Medium
 * Topic:       Array, Prefix Max, Suffix Min, Binary Search
 * Link:        https://www.geeksforgeeks.org/problems/count-always-found/1
 * ============================================================================
 * Approach:
 * - For an element arr[i] to always be found irrespective of any sequence of
 *   pivot selections:
 *   1. All elements to its left (j < i) must be strictly smaller than arr[i].
 *      If any arr[j] > arr[i], picking j as a pivot would steer the search to
 *      the left, discarding index i forever. Hence: arr[i] > prefixMax.
 *   2. All elements to its right (j > i) must be strictly greater than arr[i].
 *      If any arr[j] < arr[i], picking j as a pivot would steer the search to
 *      the right, discarding index i forever. Hence: arr[i] <= suffixMin[i].
 * - Precompute suffixMin array in O(N).
 * - Traverse left-to-right maintaining prefixMax. If both conditions hold at
 *   index i, increment count.
 *
 * Complexity:
 * - Time Complexity:  O(N) (Two linear passes)
 * - Space Complexity: O(N) (Suffix minimum array)
 * ============================================================================
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countAlwaysFound(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;

        vector<int> suffixMin(n);
        suffixMin[n - 1] = arr[n - 1];

        // Precompute suffix minimums
        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(arr[i], suffixMin[i + 1]);
        }

        int prefixMax = INT_MIN;
        int count = 0;

        // Check both conditions for every element
        for (int i = 0; i < n; i++) {
            if (arr[i] > prefixMax && arr[i] == suffixMin[i]) {
                count++;
            }
            prefixMax = max(prefixMax, arr[i]);
        }

        return count;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;
    vector<int> arr = {3, 7, 9, 8, 15};
    int ans = sol.countAlwaysFound(arr);
    cout << "Test Array: [3, 7, 9, 8, 15]\n";
    cout << "Count Always Found: " << ans << " (Expected: 3)\n";

    return 0;
}
