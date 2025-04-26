#include "../bits/stdc++.h"
using namespace std;

void reverseString(vector<char>& s) {
    int n = s.size();
    int i = 0;
    int j = n-1;
    while(i < j) {
        swap(s[i++], s[j--]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    reverseString(s);

    for (char c : s) {
        cout << c;
    }
    cout << "\n";

    return 0;
}
