#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> solution(vector<string> strArr) {
    vector<string> vc;
    for(int i = 0; i < strArr.size(); i++){
        size_t pos = strArr[i].find("ad");
        if(pos != string::npos) strArr[i] = "";
    }
    for(string &k : strArr) if(k != "") vc.emplace_back(k);
    return vc;
}