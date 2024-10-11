#include <bits/stdc++.h>
using namespace std;
vector<int> vc;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i < 9; i++)
    {
        int a; cin >> a;
        vc.push_back(a);
    }
    sort(vc.begin(), vc.end());
    int sum = accumulate(vc.begin(), vc.end(), 0) - 100;
    int t, k;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(vc[i] + vc[j] == sum)
                {
                    t = i; k = j;
                }
        }
    }
    vc.erase(vc.begin() + t); vc.erase(vc.begin() + k);
    for(int i = 0; i < 7; i++) cout << vc[i] << '\n';
    return 0;
}