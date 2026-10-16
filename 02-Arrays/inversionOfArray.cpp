#include <bits/stdc++.h>
using namespace std;

class Solution {
    
     int merge(vector<int> &arr, int low, int mid, int high){
             vector<int> temp;
             
               int cnt = 0;
               
               int left = low;
               int right = mid + 1;
               
               while(left <= mid && right <= high){
                    if(arr[left] <= arr[right]){
                         temp.push_back(arr[left]);
                         left++;
                    }else{
                        temp.push_back(arr[right]);
                        cnt += (mid - left + 1);
                        right++;
                    }
               }
               
            while(left <= mid){
                 temp.push_back(arr[left]);
                 left++;
            }
            
            while(right <= high){
                 temp.push_back(arr[right]);
                 right++;
            }
            
            for(int i = low; i <= high; i++){
                  arr[i] = temp[i- low];
            }
            
            return cnt;
     }
        
    
        int mergeSort(vector<int> &arr, int low, int high){
            int cnt = 0;
              if(low >= high) return cnt;
              
              int  mid = (low + high)/2;
              
              cnt += mergeSort(arr, low, mid);
              cnt += mergeSort(arr, mid + 1, high);
              
              cnt += merge(arr, low, mid , high);
              return cnt;
              
        }
  public:
    int inversionCount(vector<int> &arr) {
        // Code Here
        return mergeSort(arr, 0, arr.size() - 1);
    }
};


int main() {
    Solution sol;
     vector<int> a = {5, 4, 3, 2, 1};
    // int n = a.size();

    // Count inversions
    int cnt = sol.inversionCount(a);

    cout << "The number of inversions are: " << cnt << endl;

    return 0;

}


// TC - O(nlogn)
// SC - O(n)