#include <iostream>
using namespace std;

int main()
{
	int y, m, d;
	char c1, c2;
	cin >> y >> c1 >> m >> c2 >> d;

	// 년
	cout.width(4);
	cout.fill('0');
	cout << y;
	cout << c1;

	// 월
	cout.width(2);
	cout.fill('0');
	cout << m;
	cout << c2;

	// 일
	cout.width(2);
	cout.fill('0');
	cout << d;
}
