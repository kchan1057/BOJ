#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> ans;
    vector<int> count(3);
    int len = answers.size();
    vector<int> one = {1, 2, 3, 4, 5};
    vector<int> two = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> three = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    for(int i = 0; i < len; i++){
        if(answers[i] == one[i%5]) count[0]++;
        if(answers[i] == two[i%8]) count[1]++;
        if(answers[i] == three[i%10]) count[2]++;
    }
    int max_score = *max_element(count.begin(), count.end());
    for(int i = 0; i < 3; i++){
        if(max_score == count[i]){
            ans.emplace_back(i+1);
        }
    }
    return ans;
}