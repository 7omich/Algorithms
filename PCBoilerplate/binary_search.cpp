#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> vc;
	while (n--) {
		int x;
		cin >> x;
		vc.push_back(x);
	}
	sort(vc.begin(), vc.end());

	int x;
	cin >> x;
	if (binary_search(vc.begin(), vc.end(), x))	{ // returns boolean
		cout << "I found " << x << '\n';
	}

	// get range that contains x.
	vector<int>::iterator lit = lower_bound(vc.begin(), vc.end(), x);
	vector<int>::iterator uit = upper_bound(vc.begin(), vc.end(), x);
	if (lit != vc.end() && lit != uit) {
		cout << uit - lit << '\n'; // x count in vc
	}
}
