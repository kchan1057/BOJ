#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int solution(string s) {
    int len = s.length(); int cnt = 0;
    for(int i = 0; i < len-1; i++){
        stack<char> st;
        bool isValid = true;
        for(int j = 0; j < len; j++){
            if(s[j] == '[') st.push(s[j]);
            else if(s[j] == '{') st.push(s[j]);
            else if(s[j] == '(') st.push(s[j]);
            else if(s[j] == ']'){
                if(!st.empty() && st.top() == '[') st.pop();
                else isValid = false;
            }
            else if(s[j] == '}'){
                if(!st.empty() && st.top() == '{') st.pop();
                else isValid = false;
            }
            else if(s[j] == ')'){
                if(!st.empty() && st.top() == '(') st.pop();
                else isValid = false;
            }
        }
        if(isValid && st.empty()) cnt++;
        rotate(s.begin(), s.begin()+1, s.end());
    }
    
    return cnt;
}