#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int count = 0, a = sides[0], b = sides[1];
    int max_val = max(a, b);
    for(int i = 1; i <= max_val; i++){
        if(min(a, b) + i > max_val) count++;
    }
    for(int i = max(a,b); ;i++){
        if(a+b > i) count++;
        else break;
    }
    return count-1;
}