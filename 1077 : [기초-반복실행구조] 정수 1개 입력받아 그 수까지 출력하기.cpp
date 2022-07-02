#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> temp;
	int c;
	cin >> c;
	while (true) {
		if (c >= 0) {
			temp.push_back(c);
			c -= 1;
		}
		else {
			break;
		}
	}

	for (int k = temp.size() - 1; k >= 0; --k) {
		cout << temp[k] << endl;
	}
}
