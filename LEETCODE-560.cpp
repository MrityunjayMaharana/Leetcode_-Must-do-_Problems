#include "../bits/stdc++.h"
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    int prefix_sum = 0;
    mp[0] = 1;
    int count_sub = 0;
    for(int x : nums) {
        prefix_sum += x;
        if(mp.find(prefix_sum - k) != mp.end()) {
            count_sub += mp[prefix_sum - k];
        }
        mp[prefix_sum]++;
    }
    return count_sub;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {1, 2, 3, -2, 5};
    int k = 3;

    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << "\n";

    return 0;
}
