#include "bits/stdc++.h"
using namespace std;

int maxArea(vector<int>& heights) {
    int n = heights.size();
    int l = 0;
    int r = n-1;
    int mostWater = 0;
    while(l < r) {
        int len = r-l;
        int wid = min(heights[r], heights[l]);
        int area = len*wid;
        mostWater = max(area, mostWater);
        if(heights[l] <= heights[r]) l++;
        else r--;
    }
    return mostWater;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}