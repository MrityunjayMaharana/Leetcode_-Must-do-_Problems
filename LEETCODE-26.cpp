#include "../bits/stdc++.h"
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;
    int i=0;
    int j=0;
    int count = 1;
    while(j < n){ 
        if(nums[i] == nums[j]) j++;
        else {
            i++;
            nums[i] = nums[j];
            count++;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Dummy input
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

    int k = removeDuplicates(nums);

    cout << "After removing duplicates, array is:\n";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    return 0;
}
