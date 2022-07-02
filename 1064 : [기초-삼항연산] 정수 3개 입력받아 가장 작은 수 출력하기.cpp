#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int minimumresult = a < b ? a < c ? a : c : b < c ? b : c;
	cout << minimumresult;
}
