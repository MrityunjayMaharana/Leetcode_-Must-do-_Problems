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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {7,8,9,11,12};
    int result = firstMissingPositive(nums);
    cout << "First missing number is: " << result << endl;

    return 0;
}