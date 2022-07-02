#include <iostream>

using namespace std;

int main()
{
	int a, m, d, n;
	cin >> a >> m >> d >> n;
	long long int totalres = a;
	n -= 1;
	while (n != 0) {
		--n;
		totalres = (totalres * m) + d;
	}
	cout << totalres;

}
