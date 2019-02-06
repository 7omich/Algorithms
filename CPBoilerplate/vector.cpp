#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	vector<int> vc;
	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		vc.push_back(x); // add at last
	}

	n = vc.size() / 2;
	cout << vc[n] << '\n'; // vc.at(n) is prefferred in usual programming

	// iterator is a point.
	vector<int>::iterator it = vc.begin();
	vector<int>::iterator endIt = vc.end();
	while (it != endIt) {
		cout << *it << '\n';
		it++;
	}
}
