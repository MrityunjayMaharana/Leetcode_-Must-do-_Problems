#include "../bits/stdc++.h"
using namespace std;

string commonString(string s1, string s2) {
    int i = 0;
    string s = "";
    while (i < s1.length() && i < s2.length()) {
        if (s1[i] == s2[i]) s += s1[i];
        else break;
        i++;
    }
    return s;
}

string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    if (n == 0) return "";
    if (n == 1) return strs[0];
    string s = strs[0];
    for (int i = 1; i < n; i++) {
        s = commonString(s, strs[i]);
        if (s.empty()) break;
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> strs = {"abab","aba",""};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << "\n";

    return 0;
}
