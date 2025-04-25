#include "bits/stdc++.h"
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    vector<int> lmax(n);
    vector<int> rmax(n);
    int l=INT_MIN, r=INT_MIN;
    for(int i=0; i<n; i++) {
        if(height[i] > l) l = height[i];
        lmax[i] = l;
    }
    for(int j=n-1; j>=0; j--) {
        if(height[j] > r) r = height[j];
        rmax[j] = r;
    }
    int totalWater = 0;
    for(int h=0; h<n; h++) {
        int water = min(lmax[h], rmax[h]) - height[h];
        totalWater += water;
    }
    return totalWater;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> height = {0,2,0,3,1,0,1,3,2,1};
    int result = trap(height);
    cout << "Maximum trapped water: " << result << endl;

    return 0;
}
