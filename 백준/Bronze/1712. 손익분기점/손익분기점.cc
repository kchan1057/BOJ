#include <bits/stdc++.h>
using namespace std;
int main(void){
    long long int a, b, c, count; cin >> a >> b >> c;
    long long int ans = a/(c-b); 
    count = a/(c-b) + 1;
    if(c-b <= 0) cout << "-1\n";
    else cout << count << '\n';
    return 0;
}