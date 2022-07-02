#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector<int> temp;
	cin >> n;
	while (n != 0) {
		int teachersay;
		cin >> teachersay;
		temp.push_back(teachersay);
		n--;
	}

	for (int k = temp.size() -1; k >= 0; --k) {
		cout << temp[k] << " ";
	}

}
