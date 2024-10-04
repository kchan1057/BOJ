#include <bits/stdc++.h>
using namespace std;
map<int, string> mp1; //숫자 입력 시 문자열 반환.
map<string, int> mp2; //문자열 입력 시 숫자 반환.
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        string s; cin >> s;
        mp1[i] = s;
        mp2[s] = i;
    }
    for(int i = 0; i < m; i++)
    {
        string input; cin >> input;
        if(isdigit(input[0])){
            cout << mp1[stoi(input)] << '\n';
        }

        else{
            cout << mp2[input] << '\n';
        }
    }
    return 0;
}