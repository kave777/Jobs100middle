#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main() {
	ifstream in("24-3.txt");
	string s;
	in >> s;
	int ml = 0, cl = 1, nml = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'b' && s[i + 3] == 'a') {
			cl += 3;
			ml = max(ml, cl);
			i += 2;
		}
		else {
			cl = 1;
		}
	}
	cout << ml << " " << nml;
}
