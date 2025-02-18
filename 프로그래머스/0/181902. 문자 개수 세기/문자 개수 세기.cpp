#include <string>
#include <vector>
using namespace std;
vector<int> vc;
vector<int> solution(string my_string) {
    vc.resize(52);
    for(char &k : my_string){
        if(k >= 'A' && k <= 'Z') vc[k - 'A']++;
        else if(k >= 'a' && k <= 'z') vc[k - 'a' + 26]++;
    }
    return vc;
}