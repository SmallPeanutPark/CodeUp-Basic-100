#include <iostream>
#include <array>
using namespace std;

int main()
{
	int h, w;
	// 세로, 가로
	cin >> h >> w;

	array<array<int, 100>, 100> arr = { 0, };

	// 막대의 개수
	int n;
	cin >> n;

	// 막대의 길이, 방향, 좌표 
	// d : 0 가로, 1 세로
	for (int i = 0; i < n; ++i) {
		int l, d, x, y;
		cin >> l >> d >> x >> y;

		int row = x - 1;
		int column = y - 1;
		l -= 1;
		if (d == 0) {
			// 가로
			arr[row][column] += 1;
			// column 증가 
			for (int k = 1; k <= l; ++k) {
				arr[row][column + k] += 1;
			}
		}
		else {
			// 세로
			arr[row][column] += 1;
			// row 증가
			for (int j = 1; j <= l; ++j) {
				arr[row +j][column] += 1;
			}
		}
	}

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
}
