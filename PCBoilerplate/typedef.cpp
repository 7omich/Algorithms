#include <iostream>
#include <vector>
#include <utility>
using namespace std;

typedef unsigned long ul;
typedef pair<ul, ul> P;

int main() {
	cin.tie(0);
    ios::sync_with_stdio(false);

	vector<P> vc;
	int n;
	cin >> n;
	while (n--) {
		ul x, y;
		cin >> x >> y;
		vc.push_back(P(x, y));
	}
}
