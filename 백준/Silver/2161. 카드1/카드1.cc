#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    deque<int> dq;
    for(int i = n; i > 0; i--)
        dq.push_front(i);

    while(!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
        if(!dq.empty())
        {
            dq.push_back(dq.front());
            dq.pop_front();
        }
    }
    return 0;
}