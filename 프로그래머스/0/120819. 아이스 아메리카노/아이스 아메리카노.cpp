#include <string>
#include <vector>
using namespace std;
vector<int> solution(int money) {
    int count = 0; vector<int> ans;
    while(money >= 5500){
        count++;
        money -= 5500;
    }
    ans.emplace_back(count);
    ans.emplace_back(money);
    return ans;
}