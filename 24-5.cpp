#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main() {
	ifstream in("24-5.txt");
	string s;
	int nc = 0, dc = 0;
	while (in >> s) {
		nc++;
		dc += s.size();
	}
	float f = float(dc) / float(nc);
	cout << nc << " " << f;
}
