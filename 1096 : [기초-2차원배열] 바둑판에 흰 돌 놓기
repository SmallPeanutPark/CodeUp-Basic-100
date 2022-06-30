#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<array<int, 19>, 19> arr = { 0, };
	int cnt;
	cin >> cnt;
	while (cnt != 0) {
		cnt--;
		int x, y;
		cin >> x >> y;

		// 같은 지점인지 확인하는 부분 추가
		if (arr[x - 1][y - 1] != 1) {
			arr[x - 1][y - 1] += 1;
		}
	}

	for (int k = 0; k < arr.size(); ++k) {
		for (int j = 0; j < arr[0].size(); ++j) {
			cout << arr[k][j] << " ";
		}
		cout << '\n';
	}
}
