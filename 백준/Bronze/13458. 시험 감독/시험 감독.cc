#include <bits/stdc++.h>
using namespace std;
int arr[1000001];
int main(void){
    int a; cin >> a;
    for(int i = 0; i < a; i++)
        cin >> arr[i];
    int b, c; cin >> b >> c;
    long long int count = 0; count += a;
    for(int i = 0; i < a; i++)
        arr[i] -= b;
    
    for(int i = 0; i < a; i++){
        if(arr[i] > 0 && arr[i] < c) count += 1;
        else if(arr[i] >= c){
            if(arr[i] % c != 0){
                count += (arr[i] / c) + 1;
            }
            else count += (arr[i] / c);
        }
    }
    cout << count << '\n';
    return 0;
}