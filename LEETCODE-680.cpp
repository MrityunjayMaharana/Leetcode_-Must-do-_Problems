#include "../bits/stdc++.h"
using namespace std;

bool isPalindrome(string& s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s) {
    int n = s.length();
    int i = 0;
    int j = n-1;
    while (i < j) {
        if (s[i] != s[j]) {
            return isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1);
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cout << "Enter the string: ";
    cin >> s;

    if (validPalindrome(s)) {
        cout << "Yes, it can be a palindrome by removing at most one character.\n";
    } else {
        cout << "No, it cannot be a palindrome even after removing one character.\n";
    }

    return 0;
}
