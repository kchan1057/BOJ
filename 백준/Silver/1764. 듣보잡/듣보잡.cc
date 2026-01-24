#include <bits/stdc++.h>
using namespace std;
typedef struct {
    string a;
}st;
st ear[500000], see[500000];
set<string> A,B;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0, m = 0, count = 0; cin >> n >> m;
    for(int i = 0; i < n; i++) {
            cin >> ear[i].a;
            A.insert(ear[i].a);
        }
    for(int i = 0; i < m; i++) {
        cin >> see[i].a;
    }
    for(int i = 0; i < m; i++)
        {
            if(A.find(see[i].a) != A.end())
            {
                B.insert(see[i].a);
                count++;
            }
        }
    cout << count << '\n';
    for(auto i = B.begin(); i != B.end(); ++i)
        cout << *i << '\n';
    return 0;
}