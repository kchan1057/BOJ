#include <iostream>
using namespace std;
int main(void) {
	int i = 0, sum = 0;
	while (i != 5){
		int a; cin >> a;
		sum += a;
		i++;
	}
	cout << sum << '\n';
	return 0;
}