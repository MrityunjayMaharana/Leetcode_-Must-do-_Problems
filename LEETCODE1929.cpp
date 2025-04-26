#include "bits/stdc++.h"
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(2*n);
    for(int i=0; i<2*n; i++) {
        int index = i%n;
        ans[i] = nums[index];
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {1,2,1};
    vector<int> ans = getConcatenation(nums);
    for(int x: ans) cout << x << " ";
   cout << endl;

    return 0;
}