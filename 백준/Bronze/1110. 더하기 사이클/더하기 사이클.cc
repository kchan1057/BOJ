#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0, k = 0, count = 0; cin >> n; k = n;
    do{
        if(n < 10) {n = 11 * n; count++;}
        else{
            if(n/10 + n%10 < 10) {n = ((n%10)*10) + (n/10 + n%10); count++;}
            else{n = ((n%10)*10) + (n/10 + n%10)%10; count++;}
        }
    } while (n != k);
    cout << count;
    return 0;
}