#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int k = 1; k <= n; ++k) {
		if (k % 3 == 0) {
			cout << 'X' << " ";
		}
		else {
			cout << k << " ";
		}
	}
}
