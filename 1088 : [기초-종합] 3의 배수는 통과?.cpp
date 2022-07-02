#include <iostream>

using namespace std;

int main()
{
	int n;
	int result = 0;
	cin >> n;
	while (true) {
		result += 1;
		if (result <= n) {
			if (result % 3 != 0) {
				cout << result << " ";
			}
		}
		else {
			break;
		}
	}
}
