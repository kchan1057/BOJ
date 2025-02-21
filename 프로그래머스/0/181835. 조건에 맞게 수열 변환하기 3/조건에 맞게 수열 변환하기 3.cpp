#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    for(auto &t: arr)
        k%2 != 0 ? t *= k : t += k; 
    return arr;
}