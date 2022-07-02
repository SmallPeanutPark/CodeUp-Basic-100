#include <iostream>
#include <array>
#include <vector>
#include <utility>
using namespace std;

int main()
{
	array<array<int, 19>, 19> arr = {};

	// 바둑판 입력 받기
	for (int k = 0; k < arr.size(); ++k) {
		for (int j = 0; j < arr[0].size(); ++j) {
			cin >> arr[k][j];
		}
	}

	// 십자 돌리기 횟수 및 x,y 좌표 저장
	int n;
	cin >> n;
	vector<pair<int, int>> p;
	while(n != 0) {
		n--;
		int x, y;
		cin >> x >> y;
		p.push_back(make_pair(x-1, y-1));
	}


	// 십자 뒤집기 실행
	for (int i = 0; i < p.size(); ++i) {
		for (int k = 0; k < arr.size(); ++k) {
			if (arr[p[i].first][k] != 0) {
				arr[p[i].first][k] = 0;
			}
			else {
				arr[p[i].first][k] = 1;
			}
		}

		for (int m = 0; m < arr.size(); ++m) {
			if (arr[m][p[i].second] != 0) {
				arr[m][p[i].second] = 0;
			}
			else {
				arr[m][p[i].second] = 1;
			}
		}
	}



	// 바둑판 확인
	for (int i = 0; i < arr.size(); ++i) {
		for (int j = 0; j < arr[0].size(); ++j) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}


}
