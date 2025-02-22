#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string solution(vector<string> str_list, string ex) {
    string st = "";
    for(auto &k : str_list){
        size_t pos = k.find(ex);
        if(pos == string::npos) st+=k;
    }
    return st;
}