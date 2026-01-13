#include <bits/stdc++.h>
using namespace std;

int d[505][505];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, b; cin >> n >> m >> b;
    int max = 0, min = 256;
    int min_time = 2000000000, max_height = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            cin >> d[i][j];
            if(max < d[i][j]) max = d[i][j];
            if(min > d[i][j]) min = d[i][j];
        }
    }
    
    for(int i = max; i >= min; i--){
        if(i == max){
            int hole = 0;
            for(int j = 0; j < n; j++){
                for(int k = 0; k < m; k++) hole += (max - d[j][k]);
            }
            if(hole <= b) {
                min_time = hole; max_height = max;
            }
        }

        else{
            int cut_time = 0, fill_time = 0, hole = 0;
            for(int j = 0; j < n; j++){
                for(int k = 0; k < m; k++){
                    if(d[j][k] > i) cut_time += 2*(d[j][k] - i);
                }
            }
            for(int j = 0; j < n; j++){
                for(int k = 0; k < m; k++){
                    if(d[j][k] < i) hole += (i - d[j][k]);
                }
            }
            if(b + (cut_time/2) >= hole){
                if(min_time > cut_time + hole){
                    min_time = cut_time+hole; max_height = i;
                }
            }
        }
    }
    cout << min_time << " " << max_height;
    return 0;
}