#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	// 합
	cout << a + b + c << endl;

	// 평균
	cout.precision(1);
	cout.setf(ios::fixed);
	cout << static_cast<float>(a + b + c) / static_cast<float>(3);
}
