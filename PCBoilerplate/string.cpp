#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(0);
    ios::sync_with_stdio(false);

	string str;
	str = "this is a string";
	str[2] = 'a';

	if (str.length() >= 5) {
		cout << str << '\n';
    }

    // search substring
	if (str.find("is") != string::npos) {
		cout << str.find("is") << '\n';
    }
}
