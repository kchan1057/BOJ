#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string ans = "", ts = "";
    for(int i = 0; i < my_strings.size(); i++){
        int s = parts[i][0], e = parts[i][1];
        for(int j = s; j <= e; j++)
            ts += my_strings[i][j];
        ans += ts; ts = "";
    }
    return ans;
}