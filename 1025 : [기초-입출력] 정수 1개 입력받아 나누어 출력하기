#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int num;
	cin >> num;
	string str = to_string(num);

	for (int k = 0; k < str.length(); ++k) {
		string pos = str.substr(k, 1);
		cout << "[" << stoi(pos) * pow(10, (str.length() - 1) - k) << "]" << endl;
	}
}
