#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int cs(int n) {
	int ss = 0;
	while (n > 0) {
		ss += n % 10;
		n /= 10;
	}
	return ss;
}
int nd(int n) {
	int k = 0;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			k += 2;
		}
	}
	if ((int)sqrt(n) * (int)sqrt(n) == n) k--;
	return k;
}
int main() {
	for (int i = 10002000; i <= 10200000; i++) {
		if (nd(i) >= 350) {
			cout << i << " " << cs(i) << endl;
		}
	}
}
