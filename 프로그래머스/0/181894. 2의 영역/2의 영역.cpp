#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solution(vector<int> arr) {
    vector<int> ans;
    auto it = find(arr.begin(), arr.end(), 2);
    if(it == arr.end()) {ans.push_back(-1); return ans;}
    else{
        auto ik = find(arr.rbegin(), arr.rend(), 2);
        auto last = ik.base();
        if(it == last-1) {ans.push_back(2); return ans;}
        else{
            for(auto i = it; i < last; ++i) ans.push_back(*i);
            return ans;
        }
    }
}