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

	int answer = 0;
	for (int k = 0; k < temp.size(); ++k) {
		if (temp[k] % 2 == 0) {
			answer += temp[k];
		}
	}
	cout << answer;
}
