#include <bits/stdc++.h>
#include <numeric>
using namespace std;
vector<int> vc;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while(n--)
    {
        int k; cin >> k;
        if(k == 0)
        {
            if (!pq.empty()) {cout << pq.top() << '\n'; pq.pop();}
            else cout << 0 << '\n';
        }
        else pq.push(k);
    }
    return 0;
}