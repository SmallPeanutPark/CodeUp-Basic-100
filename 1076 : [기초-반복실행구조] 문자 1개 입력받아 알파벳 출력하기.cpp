#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char> temp;
	char c;
	cin >> c;
	while (true) {
		if (isalpha(c)) {
			temp.push_back(c);
			c -= 1;
		}
		else {
			break;
		}
	}

	for (int k = temp.size() - 1; k >= 0; --k) {
		cout << temp[k] << " ";
	}
}
