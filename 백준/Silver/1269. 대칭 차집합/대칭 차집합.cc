#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> vc1;
vector<int> vc2;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b; cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		int k; cin >> k;
		vc1.push_back(k);
	}
	for (int i = 0; i < b; i++)
	{
		int k; cin >> k;
		vc2.push_back(k);
	}
	int count = 0;
	sort(vc2.begin(), vc2.end());
	for (int i = 0; i < a; i++)
	{
		int target = vc1[i];
		if (binary_search(vc2.begin(), vc2.end(), target))
			count++;
	}
	cout << a + b - 2*count << '\n';
	return 0;
}