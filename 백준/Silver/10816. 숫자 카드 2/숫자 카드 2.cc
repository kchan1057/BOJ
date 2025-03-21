#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> vc;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n = 0; cin >> n;
    for(int i = 0; i < n; i++){int k; cin >> k; vc.emplace_back(k);}
    sort(vc.begin(), vc.end());    
    int m = 0; cin >> m;
    for(int i = 0; i < m; i++){
        int k; cin >> k;
        auto lower = lower_bound(vc.begin(), vc.end(), k);
        auto upper = upper_bound(vc.begin(), vc.end(), k);
        cout << upper - lower << " ";
    }
	return 0;
}