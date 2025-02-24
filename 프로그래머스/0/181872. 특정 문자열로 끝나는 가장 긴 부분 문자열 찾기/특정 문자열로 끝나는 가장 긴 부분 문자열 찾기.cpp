#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string solution(string myString, string pat) {
    size_t pos = myString.find(pat); size_t last_pos = string::npos;
    while(pos != string::npos){
        last_pos = pos;
        pos = myString.find(pat, pos+1);
    }
    if(last_pos != string::npos)
        return myString.substr(0, last_pos + pat.size());
}