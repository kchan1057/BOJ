#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        string s;
        cin >> s;
        int st = 0;
        int en = s.length() - 1;
        bool checked = false;
        while (st < en) {
            if (s[st] == s[en]) {
                st++;
                en--;
            } else {
                if (isPalindrome(s, st + 1, en) || isPalindrome(s, st, en - 1)) cout << 1 << '\n';
                else cout << 2 << '\n';
                checked = true;
                break;
            }
        }
        if (!checked) cout << 0 << '\n';
    }
    return 0;
}