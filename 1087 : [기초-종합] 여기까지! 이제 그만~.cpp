#include <iostream>

using namespace std;

int main()
{
	int n;
	int result = 0;
	int cnt = 1;
	cin >> n;
	while (true) {
		result += cnt;
		++cnt;
		if (result >= n) {
			cout << result;
			break;
		}
	}
}
