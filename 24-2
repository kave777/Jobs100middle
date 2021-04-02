#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main() {
	ifstream in("24-2.txt");
	string s;
	in >> s;
	int ml = INT_MAX, cl = 0, nml = 0;
	for (int i = 1; i < s.size() - 1; i++) {
		if ((int)s[i - 1] % 2 != (int)s[i + 1] % 2) {
			cl++;
		}
		else {
			if (cl != 0) {
				if (ml == cl) {
					nml++;
				}
				else if (cl < ml) {
					nml = 1;
					ml = cl;
				}
			}
			cl = 0;
		}
	}
	if (cl != 0) {
		if (ml == cl) {
			nml++;
		}
		else if (cl < ml) {
			nml = 1;
			ml = cl;
		}
	}
	cout << ml << " " << nml;
}
