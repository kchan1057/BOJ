#include <string>
#include <algorithm>
using namespace std;

string solution(string bin1, string bin2) {
    // stoi를 활용한 2진수 -> 10진수 변환
    int count1 = stoi(bin1, nullptr, 2);
    int count2 = stoi(bin2, nullptr, 2);

    int total = count1 + count2;
    
    // 10진수를 2진수 문자열로 변환
    string ans = "";
    if (total == 0) return "0";
    while (total > 0) {
        ans += (total % 2) + '0';
        total /= 2;
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}
