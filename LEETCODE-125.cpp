#include "bits/stdc++.h"
using namespace std;

bool isPalindrome(string s) {
    string str = "";
    for(char c: s) {
        if(isalnum(c)) str += tolower(c);
    }
    int n = str.length();
    int i = 0;
    int j = n-1;
    while(i < j) {
        if(str[i++] != str[j--]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   string s = "Was it a car or a cat I saw?";
   bool result = isPalindrome(s);
    cout << (result ? "True" : "False") << endl;

    return 0;
}