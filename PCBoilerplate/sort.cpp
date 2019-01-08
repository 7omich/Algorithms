#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // import greater<int>
using namespace std;

int main() {
	cin.tie(0);
    ios::sync_with_stdio(false);

	int n;
	cin >> n;

    // vector
	vector<int> vc;
	while (n--) {
		int x;
		cin >> x;
		vc.push_back(x);
	}

	sort(vc.begin(), vc.end()); // give two iterators

	for (int i = 0; i < vc.size(); i++) {
		cout << vc[i] << '\n';
    }

    // array
    int arr[n];
    sort(arr, arr + n);
    sort(arr, arr + n, greater<int>()); // desc
}
