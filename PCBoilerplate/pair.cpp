#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
	cin.tie(0);
    ios::sync_with_stdio(false);

	vector<pair<int, int>> vc;
	int n;
	cin >> n;
	while(n--) {
		int x, y;
		cin >> x >> y;
		vc.push_back(pair<int, int>(x, y));
	}

	pair<int, int> p = vc.front();
	cout << p.first << ' ' << p.second << '\n';
}
