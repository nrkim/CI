#include <iostream>
#include <string>

using namespace std;

bool isUniqueChar(string& str) {
	bool ascii[256] ,res = true;

	fill(ascii, ascii + sizeof(ascii), true);

	for (int i = 0; i < str.length; ++i) {
		char c = str[i];
		if (c >= 0 && c < 256) {
			if (ascii[c])
				ascii[c] = false;
			else res = false;
		}
	}

	return res;
}

int main() {
	string str;
	cin >> str;

	if (isUniqueChar(str))
		cout << "It's unique." << endl;
	else
		cout << "It's overlaped." << endl;

	return 0;
}