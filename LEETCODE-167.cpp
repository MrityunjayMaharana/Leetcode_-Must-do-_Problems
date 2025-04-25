#include "bits/stdc++.h"
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int n = numbers.size();
    int i = 0;
    int j = n-1;
    while(i < j) {
        int sum = numbers[i] + numbers[j];
        if(sum == target) return {i+1, j+1}; 
        else if(sum > target) { j--; }
        else { i++; }
    }
    return {};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   vector<int> numbers = {1,2,3,4};
   int target = 3;
   vector<int> ans = twoSum(numbers, target);
   for(int x: ans) cout << x << " ";
   cout << endl;

    return 0;
}