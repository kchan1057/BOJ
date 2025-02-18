#include <vector>
using namespace std;
vector<int> solution(vector<int> arr) {
    for(auto &k : arr){
        if(k >= 50 && k % 2 == 0) k /= 2;
        else if(k < 50 && k % 2 != 0) k *= 2;
    }
    return arr;
}