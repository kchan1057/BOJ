#include <string>
#include <vector>
using namespace std;
int solution(int a, int b) {
    string astr = to_string(a);
    string bstr = to_string(b);
    string a1 = astr + bstr;
    string a2 = bstr + astr;
    return stoi(a1) > stoi(a2) ? stoi(a1) : stoi(a2);
}