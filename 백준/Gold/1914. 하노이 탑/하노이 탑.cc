#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

void printBigNumber(std::vector<int>& num) {
    bool leadingZero = true;
    for (int i = num.size() - 1; i >= 0; --i) {
        if (leadingZero && num[i] == 0) continue;
        leadingZero = false;
        std::cout << num[i];
    }
    if (leadingZero) std::cout << 0;  // If all digits are zero
    std::cout << std::endl;
}

void subtractOne(std::vector<int>& num) {
    int i = 0;
    while (i < num.size() && num[i] == 0) {
        num[i] = 9;
        i++;
    }
    num[i] -= 1;
    if (num.back() == 0 && num.size() > 1) {
        num.pop_back();  // Remove leading zeros
    }
}

void hanoi(int a, int b, int n)
{
    if(n == 1) 
    {
        cout << a << " " << b << '\n';
        return;
    }

    hanoi(a, 6-a-b, n-1);
    cout << a << " " << b << '\n';
    hanoi(6-a-b, b, n-1);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    std::vector<int> result(1, 1);  // Initialize result as 1 (2^0)
    int n; 
    cin >> n;
    
    if(n > 20)
    {
        for (int i = 0; i < n; ++i) 
        {
            int carry = 0;
            for (int j = 0; j < result.size(); ++j) 
            {
                int value = result[j] * 2 + carry;
                result[j] = value % 10;
                carry = value / 10;
            }
            if (carry) result.push_back(carry);  // If there's carry, add a new digit
        }
        
        subtractOne(result);  // Subtract 1 from 2^n
        printBigNumber(result);  // Print 2^n - 1
    }
    else
    {
        cout << (1 << n) - 1 << '\n';  // Use bit-shift for small n
        hanoi(1, 3, n);
    }
    return 0;
}