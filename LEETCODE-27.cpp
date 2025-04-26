#include "../bits/stdc++.h"
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int n = nums.size();
    int i = 0;
    int l_index = n-1;
    while(i <= l_index) {
        if(nums[i] == val) {
            swap(nums[i], nums[l_index]);
            l_index--;
        } else i++;
    }
    return l_index+1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {3, 2, 2, 3, 4, 2, 3};
    int val = 3;

    int newLength = removeElement(nums, val);

    cout << "New length: " << newLength << "\n";
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    return 0;
}
