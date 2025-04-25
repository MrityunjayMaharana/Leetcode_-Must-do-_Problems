#include "bits/stdc++.h"
using namespace std;

// approach 01 (using sorting o(nlogn))
/*
    [2, 20, 4, 10, 3, 4, 5]
    [2, 3, 4, 4, 5, 10, 20]
*/
int longestConsecutive1(vector<int>& nums) {
    int n = nums.size();
    int longest = 1;
    sort(nums.begin(), nums.end());
    int count = 1;
    for(int i=1; i<n; i++) {
        if(nums[i] == nums[i-1]) continue;
        if(nums[i] == nums[i-1]+1) {
            count++;
        } else {
            count = 1;
        }
        longest = max(longest, count);
    }
    return n == 0 ? 0 : longest;
}

int longestConsecutive2(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());

    int longest = 0;

    for (int num : nums) {
        // Check if it's the start of a sequence
        if (s.find(num - 1) == s.end()) {
            int currentNum = num;
            int count = 1;

            // Count sequence length
            while (s.find(currentNum + 1) != s.end()) {
                currentNum++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    return longest;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {2, 20, 4, 10, 3, 4, 5};
    int ans1 = longestConsecutive1(nums);
    int ans2 = longestConsecutive2(nums);
    cout << "Longest subsequence1: " << ans1 << endl;
    cout << "Longest subsequence2: " << ans2 << endl;


    return 0;
}