#include <string>
#include <vector>
using namespace std;
int solution(int a, int d, vector<bool> included) {
    int k = included.size(); int sum = 0;
    vector<int> vc;
    for(int i = 0; i < k; i++){
        vc.push_back((a + d*i));
        if(included[i] == true)
            sum += vc[i];
    }
    return sum;
}