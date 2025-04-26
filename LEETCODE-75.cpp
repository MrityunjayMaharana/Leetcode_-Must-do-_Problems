#include "../bits/stdc++.h"
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int zeroes = 0;
    int ones = 0;
    int twos = 0;
    for(int x: nums) {
        if(x == 0) zeroes++;
        if(x == 1) ones++;
        if(x == 2) twos++;
    }
    int i = 0;
    while(i < n) {
        if(zeroes > 0) { nums[i] = 0; zeroes--; }
        else if(ones > 0) { nums[i] = 1; ones--; }
        else if(twos > 0) { nums[i] = 2; twos--; }
        i++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {2, 0, 2, 1, 1, 0}; 
    sortColors(nums);

    for(int x : nums) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
