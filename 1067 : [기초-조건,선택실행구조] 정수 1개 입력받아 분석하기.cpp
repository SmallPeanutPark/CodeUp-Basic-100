#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	if (num < 0) {
		// 음
		cout << "minus" << endl;
		if (num % 2 == 0) {
			cout << "even";
		}
		else {
			cout << "odd";
		}
	}
	else {
		// 양
		cout << "plus" << endl;
		if (num % 2 == 0) {
			cout << "even";
		}
		else {
			cout << "odd";
		}
	}
}
