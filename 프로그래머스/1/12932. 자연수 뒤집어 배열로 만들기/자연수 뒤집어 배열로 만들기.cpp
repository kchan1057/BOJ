#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(long long n) {
    string st = to_string(n);
    reverse(st.begin(), st.end());
    vector<int> vc;
    for(char k : st) vc.emplace_back(k - '0');
    return vc;
}