#include <string>
#include <vector>
using namespace std;
int solution(vector<int> numbers) {
    int max = -10000*10000-1;
    for(int i = 0 ; i < numbers.size(); i++){
        for(int j = i+1; j < numbers.size(); j++){
            int k = numbers[i] * numbers[j];
            if(k > max) max = k;
        }
    }
    return max;
}