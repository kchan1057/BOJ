#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vc;
    for(int i = 0; i < 5; i++){
        int score; cin >> score;
        if(score < 40) score = 40;
        vc.emplace_back(score);
    }
    int sum = accumulate(vc.begin(), vc.end(), 0);
    cout << sum / 5;
}
