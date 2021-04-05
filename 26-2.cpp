#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	int n;
	ifstream in("26-2.txt");
	in >> n;
	vector<int> f(n);
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) in >> f[i];
	sort(f.begin(), f.end());
	reverse(f.begin(), f.end());
	a += f[0];
	f.erase(f.begin(), f.begin() + 1);
	bool k = true;
	while (!f.empty()) {
		if (k) {
			if (!f.empty())
				b += f[0];

			if (!f.empty())
				f.erase(f.begin(), f.begin() + 1);
			if (!f.empty())
				while (b <= a) {
					b += f[f.size() - 1];
					if (f.empty()) break;
					else f.pop_back();
				}
			k = false;
		}
		else {
			if (!f.empty())
				a += f[0];

			if (!f.empty())
				f.erase(f.begin(), f.begin() + 1);
			if (!f.empty())
				while (a <= b) {
					a += f[f.size() - 1];
					if (f.empty()) break;
					else f.pop_back();
				}
			k = true;
		}
	}
	cout << a << " " << b;
}
