#include "../bits/stdc++.h"
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    int candidate1 = INT_MIN, candidate2 = INT_MIN;
    int vote1 = 0, vote2 = 0;
    
    for (int num : nums) {
        if (num == candidate1) vote1++;
        else if (num == candidate2) vote2++;
        else if (vote1 == 0) {
            candidate1 = num;
            vote1 = 1;
        } else if (vote2 == 0) {
            candidate2 = num;
            vote2 = 1;
        } else {
            vote1--;
            vote2--;
        }
    }

    vote1 = vote2 = 0;
    for (int num : nums) {
        if (num == candidate1) vote1++;
        else if (num == candidate2) vote2++;
    }

    vector<int> res;
    if (vote1 > n/3) res.push_back(candidate1);
    if (vote2 > n/3) res.push_back(candidate2);

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {3, 2, 3};

    vector<int> ans = majorityElement(nums);

    for (int x : ans) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
