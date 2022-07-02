#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	for (int k = 0; k < str.length(); ++k) {
		cout << "\'" << str[k] << "\'" << endl;
	}
}
