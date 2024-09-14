#include <bits/stdc++.h>
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

    int aindx = 0, bindx = 0;

    for(int i = 0; i < a + b; i++)
    {
        if(aindx == a) C[i] = B[bindx++];
        else if(bindx == b) C[i] = A[aindx++];
        else if(A[aindx] <= B[bindx]) C[i] = A[aindx++];
        else C[i] = B[bindx++];
    }
    for(int i = 0; i < a+b; i++)
        cout << C[i] << " ";
    return 0;
}