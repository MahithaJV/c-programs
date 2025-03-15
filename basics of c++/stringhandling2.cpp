#include <iostream>
using namespace std;

bool isPalindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}

string longestPalindrome(string s) {
    int maxLen = 0;
    string longest = "";
    
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            if (isPalindrome(s, i, j) && (j - i + 1) > maxLen) {
                maxLen = j - i + 1;
                longest = s.substr(i, maxLen);
            }
        }
    }
    return longest;
}

int main() {
    string s = "babad";
    cout << "Longest Palindrome: " << longestPalindrome(s) << endl;
    return 0;
}
