#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int h, b, c, s;
	cin >> h >> b >> c >> s;
	unsigned int total = (h * b * c * s);
	double result = total / 8 / pow(2, 10) / pow(2, 10);

	
	cout.setf(ios::fixed);
	cout.precision(1);
	cout << result << " MB";
}
