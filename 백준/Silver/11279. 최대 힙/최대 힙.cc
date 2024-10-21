#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    priority_queue<int> pq;
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