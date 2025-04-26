#include "../bits/stdc++.h"
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int votes = 1;
    int candidate = nums[0];
    for(int i=1; i<n; i++) {
        if(nums[i] == candidate) votes++;
        else if(nums[i] != candidate and votes == 0) candidate = nums[i];
        else votes--;
    }
    return candidate;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int result = majorityElement(nums);
    cout << "Majority Element: " << result << "\n";

    return 0;
}
