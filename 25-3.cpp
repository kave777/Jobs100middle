#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
bool izi(int n) {
	for (int j = 2; j * j <= n; j++) {
		if (n % j == 0) return false;
	}
	return true;
}

int main() {
	for (int i = 200800; i <= 200950; i++) {
		set<int> sid;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				if (izi(j)) sid.insert(j);
				if (izi(i / j)) sid.insert(i / j);
			}
		}
		int pp = 1,ss=0;
		for (auto k : sid) {
			pp = pp * k;
			ss += k;
		}
		if (sid.size() == 3 && pp==i && ss<1000) {
			cout << i << " " << ss << endl;
		}
	}
}
