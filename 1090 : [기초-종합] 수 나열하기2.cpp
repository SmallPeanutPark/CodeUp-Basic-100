#include <iostream>

using namespace std;

int main()
{
	long long int a, d, n;
	cin >> a >> d >> n;
	while (n > 1) {
		n--;
		a *= d;
	}
	cout << a;
}
