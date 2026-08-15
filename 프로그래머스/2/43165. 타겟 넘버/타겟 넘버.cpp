#include <string>
#include <stack>
#include <vector>
using namespace std;

int ans = 0;
int target;
void dfs(vector<int>& numbers, int i, int sum){
    if(i == numbers.size()) {
        if(sum == target) ans++;
        return;
    }
    dfs(numbers, i+1, sum + numbers[i]);
    dfs(numbers, i+1, sum - numbers[i]);
    return;
}
int solution(vector<int> numbers, int target) {
    ::target = target;
    dfs(numbers, 0, 0);
    return ans;
}