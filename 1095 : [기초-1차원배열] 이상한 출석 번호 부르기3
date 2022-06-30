#include <iostream>
#include <vector>
#include <algorithm>
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

	int answer = *min_element(temp.begin(), temp.end());
	cout << answer;

}
