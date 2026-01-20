#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int arr[5000] = { 0 };
queue<int> q;
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 1; i < n+1; i++)
		q.push(i);
	int s = 0;
	while (!q.empty())
	{
		for (int j = 0; j < k - 1; j++)
		{
			q.push(q.front());
			q.pop();
		}
		arr[s] = q.front();
		q.pop();
		s++;
	}
	cout << "<";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
		if (i != n - 1)
			cout << "," << " ";
	}
	cout << ">\n";
	return 0;
}