#include <iostream>

using namespace std;

int main(void) {
	float x;
	cin >> x;
	cout.setf(ios::fixed); // 기본 : 소수점 아래 자릿수를 6자리로 고정
	cout << x;
}
