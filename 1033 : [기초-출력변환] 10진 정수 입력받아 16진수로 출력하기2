#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	stringstream strstream;
	int num;
	cin >> num;
	strstream << hex << num;

	string str;
	
	for (int k = 0; k < strstream.str().length(); ++k) {
		str += toupper(strstream.str()[k]);
	}
	
	cout << str;
}
