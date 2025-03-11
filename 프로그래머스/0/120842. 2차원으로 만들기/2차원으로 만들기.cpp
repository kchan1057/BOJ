#include <string>
#include <vector>
using namespace std;
vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> vc(num_list.size()/n, vector<int>(n, 0));
    int count = 0;
    for(int i = 0; i < vc.size(); i++){
        for(int j = 0 ; j < vc[i].size(); j++){
            vc[i][j] = num_list[count];
            count++;
        }
    }
    return vc;
}