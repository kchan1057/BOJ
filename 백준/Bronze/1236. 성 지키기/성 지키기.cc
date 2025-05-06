#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int main(void){
    int colcount = 0, rowcount = 0;
    cin >> n >> m; 
    vector<vector<char>> vc(n, vector<char>(m, ' '));
    for(int i = 0; i < n; i++){
        string st; cin >> st;
        for(int j = 0; j < st.size(); j++) vc[i][j] = st[j];
    }

    for(int i = 0 ; i < n; i++){
        bool check1 = true;
        for(int j = 0; j < m; j++){
            if(vc[i][j] == 'X'){
                check1 = false;
                break;
            }
        }
        if(check1) rowcount++;
    }

    for(int i = 0 ; i < m; i++){
        bool check2 = true;
        for(int j = 0; j < n; j++){
            if(vc[j][i] == 'X'){
                check2 = false;
                break;
            } 
        }
        if(check2) colcount++;
    }
    cout << max(rowcount, colcount) << '\n';
    return 0;
}