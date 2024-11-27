#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool vis[1001];
queue<int> q;
int main(void)
{
    int count = 0;
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++) //연결 리스트 만들기.
    {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for(int i = 1; i <= n; i++) //그림의 개수를 구하는 것과 같으니 for문에 count변수 값 지정.
    {
        if(vis[i]) continue; // 먼저 검사하고 count랑 vis 설정.
        count++;
        vis[i] = 1;
        q.push(i);
        while(!q.empty()) // 한 개씩 넣고 인접한 것들 체크해주기. //그림의 크기를 구하는 것이 아니니 while문 안에 변수 값 설정해줄 필요 X.
        {
            int cur = q.front(); q.pop(); //cur에 q의 front 값을 저장해주고, pop해주기.
            for(auto a : adj[cur]) // a가 adj[cur] 값을 저장. 2차원이라고 생각을 해야하니. adj[cur][0~i]까지 체크하는 것.
        {
                if(vis[a]) continue; //먼저 중복이 없는지를 체크 해주기.
                q.push(a); // Queue에 넣어주어 지속적으로 물결처럼 퍼지게끔 설정.
                vis[a] = 1; // 다녀간 곳이라고 꼭 위치 설정해주기.
            }
        }
    }
    cout << count << '\n';
    return 0;
}