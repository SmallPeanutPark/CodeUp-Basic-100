#include <iostream>
#include <array>
#include <utility>
using namespace std;

int main()
{
	array<array<int, 10>, 10> arr;
	pair<int, int> p;

	// 판 완성, 먹이 위치 찾기
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			cin >> arr[i][j];
			if (arr[i][j] == 2) {
				p.first = i;
				p.second = j;
			}
		}
	}

	bool success = false;
	int y = 1;
	for (int i = 1; i < 10; ++i) {
		for (int j = y; j < 10; ++j) {
			if (arr[i][j] != 1) {
				// 갈 수 있는 곳
				arr[i][j] = 9;
				y = j;
				if ((i == p.first) && (p.second == j)) {
					success = true;
					break;
				}
			}
			else {
				// 갈 수 없는 곳
				break;
			}
		}
		if (success) {
			// 먹이 찾음 <끝>
			break;
		}
	}

	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
}
