#include <string>
#include <vector>
using namespace std;
vector<int> solution(vector<int> arr, vector<vector<int>> que) {
    for(int k = 0; k < que.size(); k++){
        int i = que[k][0], j = que[k][1];
        swap(arr[i], arr[j]);
    }
    return arr;
}