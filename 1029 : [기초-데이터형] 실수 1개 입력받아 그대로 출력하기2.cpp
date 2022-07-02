#include <iostream>

using namespace std;

int main()
{
	double d;
	cin >> d;
	cout.precision(11);
	cout.setf(ios::fixed);
	cout << d;
	cout.unsetf(ios::fixed);
}
