#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> ans;
    for(int i = 0; i <= 10000; i++){
        if(i % 3 == 0 || to_string(i).find('3') != string::npos) continue;
        else ans.emplace_back(i);
    }
    return ans[n-1];
}
    
