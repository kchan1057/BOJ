#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[10];
int num[10];
void func(int k){
    if(k == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    int last = -1;
    for(int i = 0; i < n; i++){
        if(last != num[i]){
            arr[k] = num[i];
            last = num[i];
            func(k+1);
            
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        num[i] = k;
    }
    sort(num, num + n);
    func(0);
    return 0;
}