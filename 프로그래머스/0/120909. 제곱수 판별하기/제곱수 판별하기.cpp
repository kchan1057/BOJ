#include <string>
#include <vector>
#include <cmath>
using namespace std;
int solution(int n) {
    for(int i = 1; i <= n; i++){
        if((pow(i, 2)) == (double)n) return 1;
    }
    return 2;
}