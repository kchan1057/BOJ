#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    string k = ineq + eq;
    if(k == ">=") return n >= m ? 1 : 0;
    else if(k == "<=") return n <= m ? 1 : 0;
    else if(k == ">!") return n > m ? 1 : 0;
    else if(k == "<!") return n < m ? 1 : 0;
}