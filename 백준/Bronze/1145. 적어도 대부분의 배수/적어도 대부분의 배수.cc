#include <bits/stdc++.h>
using namespace std;
int arr[5];
void func(int arr[]){
    int a = 1;
    while(1){
        int count = 0;
        for(int i = 0; i < 5; i++){
            if(a % arr[i] == 0) count++;
            if(count == 3){cout << a << '\n'; return;}
        }
        a++;
    }
}
int main(void){
    for(int i = 0; i < 5; i++)
        cin >> arr[i];
    func(arr);
    return 0;
}