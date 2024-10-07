#include <bits/stdc++.h>
using namespace std;
vector<int> pnum;
int primenum(int k) {
    pnum.assign(2 * k + 1, 1);
    pnum[0] = pnum[1] = 0;
    for(int i = 2; i*i <= 2*k; i++){
        if(pnum[i] == 1){
            for(int j = i*i; j <= 2*k; j += i)
                pnum[j] = 0;
        }
    }
    int count = 0;
    for(int i = k+1; i <= 2*k; i++){
            if(pnum[i] == 1)
                count++;
    }
    return count;
}
int main(void){
    int k = 1;
    while(true){
        cin >> k;
        if(k == 0) break;
        cout << primenum(k) << '\n';
    }
    return 0;
}