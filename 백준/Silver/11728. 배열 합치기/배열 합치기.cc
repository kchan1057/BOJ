#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int A[1000001], B[1000001], C[2000002];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b; cin >> a >> b;
    int c = a+b;
    for(int i = 0; i < a; i++) cin >> A[i];
    for(int j = 0; j < b; j++) cin >> B[j];

    int aindx = 0, bindx = 0, t = 0;

    while(aindx < a && bindx < b)
    {
        if(A[aindx] <= B[bindx])
            C[t++] = A[aindx++];
        else
            C[t++] = B[bindx++];
    }

    while(aindx < a)
        C[t++] = A[aindx++];

    while(bindx < b)
        C[t++] = B[bindx++];
   
    
    for(int i = 0; i < c; i++)
        cout << C[i] << " ";
    return 0;
}