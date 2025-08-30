#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    int len = s.length();
    stack<char> st;
    bool isValid = true;
    st.push(s[0]);
    for(int i = 1; i < len; i++){
        if(!st.empty() && st.top() == s[i]){
            st.pop();
            if(i != len - 1) continue;
            else break;
        }
        else st.push(s[i]);
    }
    if(!st.empty()) isValid = false;
    return isValid ? 1 : 0;
}