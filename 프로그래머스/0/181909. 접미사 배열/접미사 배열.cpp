#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> solution(string my) {
    vector<string> vc;
    for(int i = 0; i < my.size(); i++)
        vc.push_back(my.substr(i));
    sort(vc.begin(), vc.end());
    return vc;
}