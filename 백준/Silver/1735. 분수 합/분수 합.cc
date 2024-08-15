#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	int c = a%b;
	while(c != 0){
		a = b;
		b= c;
		c = a%b;
	}
	return b;
}
int lmc(int a, int b)
{
	return a*b/ gcd(a, b);
}
int main()
{	
	int a, b, c, d;
	int son, mom;
	cin >> a >> b;
	cin >> c >> d;
	mom = lmc(b, d);
	son = lmc(b,d)/b*a + lmc(b,d)/d*c;
	if(gcd(son, mom) != 1) // 분자와 분모가 약분이 된다는 뜻
	{
		int a = gcd(son, mom);
		son = son / a;
		mom = mom / a;
	}
	cout << son << " " <<  mom << '\n';
	return 0;
}