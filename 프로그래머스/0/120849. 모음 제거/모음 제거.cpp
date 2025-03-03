#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string solution(string my_string) {
    vector<char> vc = {'a', 'e', 'i', 'o', 'u'};
    string st = "";
    for(char & k : my_string){
        auto it = find(vc.begin(), vc.end(), k);
        if(it == vc.end()) st += k;
    }
    return st;
}