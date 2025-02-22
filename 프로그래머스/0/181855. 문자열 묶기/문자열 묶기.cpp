#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int solution(vector<string> strArr) {
    vector<int> lengths(31,0);
    for(string str : strArr)lengths[str.length()]++;
    return *max_element(lengths.begin(),lengths.end());
}