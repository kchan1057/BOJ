#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int solution(string s) {
    istringstream iss(s); string token; vector<int> result;
    while(iss >> token){
        if(token == "Z") result.pop_back();
        else result.emplace_back(stoi(token));
    }
    int count = 0;
    for(int n: result) count += n;
    return count;
}