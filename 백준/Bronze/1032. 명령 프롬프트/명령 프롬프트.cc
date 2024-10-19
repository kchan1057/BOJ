#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    string a; cin >> a;
    int len = a.length();
    for(int i = 0; i < n-1; i++)
    {
        string b; cin >> b;
        for(int j = 0; j < len; j++)
        {
            if(a[j] != b[j]) a[j] = '?';
        }
    }
    cout << a << '\n';
    return 0;
}