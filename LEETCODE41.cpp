#include "../bits/stdc++.h"
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    unordered_map<int, int> mp;
    for(int x: nums) {
        mp[x]++;
    }
    int ans = 1;
    while(mp[ans] != 0) {
        ans++;
    }
    return ans;
}

int firstMissingPositive2(vector<int>& nums) {
    int n = nums.size();
    
    // Step 1: Replace non-positive numbers and numbers > n
    for(int i = 0; i < n; i++) {
        if(nums[i] <= 0 || nums[i] > n)
            nums[i] = n + 1;  // Important: setting to n+1
    }
    
    // Step 2: Mark the presence
    for(int i = 0; i < n; i++) {
        int num = abs(nums[i]);
        if(num <= n) {
            nums[num-1] = -abs(nums[num-1]);
        }
    }
    
    // Step 3: Find the first missing
    for(int i = 0; i < n; i++) {
        if(nums[i] > 0) {
            return i + 1;
        }
    }
    
    return n + 1;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {7,8,9,11,12};
    int result = firstMissingPositive(nums);
    cout << "First missing number is: " << result << endl;
    int result2 = firstMissingPositive2(nums);
    cout << "First missing number is O(1): " << result2 << endl;

    return 0;
}