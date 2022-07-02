#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	vector<int> temp;
	cin >> num;
	while (num != 0) {
		int n;
		cin >> n;
		temp.push_back(n);
		num--;
	}

	for (int k = 0; k < temp.size(); ++k) {
		cout << temp[k] << endl;
	}
}
