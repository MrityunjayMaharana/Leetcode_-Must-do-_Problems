#include "bits/stdc++.h"
using namespace std;

/*
    Input: nums = [-1,0,1,2,-1,-4]

    Output: [[-1,-1,2],[-1,0,1]]
*/

// Brute force approach
vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> st; 
    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    sort(triplet.begin(), triplet.end());
                    st.insert(triplet);
                }
            }
        }
    }
    return vector<vector<int>>(st.begin(), st.end());
}

// Optimised approach
vector<vector<int>> threeSum2(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;
    for(int i=0; i<n; i++) {
        if(nums[i] > 0) break;
        if(i>0 and nums[i] == nums[i-1]) continue;
        int left = i+1, right = n-1;
        int a = nums[i];
        while(left < right) {
            int b = nums[left], c = nums[right];
            int sum = a + b + c;
            if(sum == 0) {
                ans.push_back({a, b, c}); 
                left++; right--;
                while(left < right and nums[left] == nums[left-1]) left++;
            } 
            else if(sum > 0) right--;
            else left++;
        }
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    vector<vector<int>> result2 = threeSum2(nums);

    for (auto triplet : result) {
        for (int num : triplet) cout << num << " ";
        cout << endl;
    }
    for (auto triplet : result2) {
        for (int num : triplet) cout << num << " ";
        cout << endl;
    }

    return 0;
}