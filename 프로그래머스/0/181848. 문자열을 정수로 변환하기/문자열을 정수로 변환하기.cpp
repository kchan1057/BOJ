#include <string>
#include <vector>
#include <math.h>

using namespace std;

int solution(string n_str) {
    int nlen = n_str.size();
    int k = pow(10, (nlen-1));
    vector<int> vc;
    int answer = 0;
    for(char c : n_str){
        vc.push_back(c - '0');
    }
    
    for(auto a : vc){
        answer += a*k;
        k /= 10;
    }
    return answer;
}