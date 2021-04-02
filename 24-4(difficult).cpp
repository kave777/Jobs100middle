#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main() {
	ifstream in("24-4.txt");
	string s;
	in >> s;
	char f = s[0], se = s[1],lc=se;
	int cl = 2, ml = 2, la = 1;
	for (int i = 2; i < s.size(); i++) {
		if (s[i] == lc) {
			la++;
			cl++;
			ml = max(ml, cl);
		}
		else if (s[i] == f) {
			la = 1;
			f = lc;
			lc = s[i];
			cl++;
			ml = max(ml, cl);
		}
		else {
			ml = max(ml, cl);
			f = lc;
			lc = s[i];
			cl = la + 1;
			la = 1;
		}
	}
	cout << ml;
}
