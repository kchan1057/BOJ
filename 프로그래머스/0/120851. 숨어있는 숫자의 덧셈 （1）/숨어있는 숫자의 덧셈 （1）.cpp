#include <string>
#include <vector>
using namespace std;
int solution(string my) {
    int count = 0;
    for(char &k: my){
        if(k - 48 >= 0 && k - 48 <= 9) count += k-48;
    }
    return count;
}