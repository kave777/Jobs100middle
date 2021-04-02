#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main() {
	ifstream in("24-1.txt");
	string s;
	in >> s;
	int ml = 0, cl = 1;
	char mc='.',cc='.';
	for (int i = 2; i < s.size() - 1; i++) {
		if (s[i] == s[i - 1]) {
			cl++;
			cc = s[i];
		}
		else {
			if (s[i - cl-1] == s[i]) {
				if (cl >= ml) {
					ml = cl;
					mc = cc;
				}
			}
			cc = s[i];
			cl = 1;
		}
	}
	cout << mc << " " << ml;
}