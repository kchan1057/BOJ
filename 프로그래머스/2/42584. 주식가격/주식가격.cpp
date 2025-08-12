#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> ans;
    for(int i = 0; i < prices.size()-1; i++){
        int count = 1;
        for(int j = i+1; j < prices.size()-1; j++){
            if(prices[i] <= prices[j]) count++;
            else {
                break;
            }
        }
        ans.emplace_back(count);
    }
    ans.emplace_back(0);
    return ans;
}