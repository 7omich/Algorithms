#include <iostream>
#include <map>
using namespace std;

int main() {
	cin.tie(0);
    ios::sync_with_stdio(false);

	map<char, int> map;
	map['a'] = 1;
	map['b'] = 2;
	cout << map['a'] << ' ' << map['b'] << '\n';

	map.insert(map<char, int>::value_type('c', 3));
	if (map.find('c') != map.end()) { // iterator
		cout << map['c'] << '\n';
    }
}
