#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	for (int i = 100500; i <= 100700; i++) {
		int nd3 = 0, nn = 0;
		for (int j = 1; j * j <= i; j++) {
			if (i % j == 0) {
				if (j % 3 == 0)nd3++;
				else nn++;
				if (j != i /j){
					if ((i/j) % 3 == 0)nd3++;
					else nn++;
				}
			}
		}
		if (nd3 != 0) {
			if (nd3 > nn) {
				if (float(nd3) / (float)nn > 2) {
					cout << i << " " << abs(nd3 - nn) << endl;
				}
			}
			if (nd3 < nn) {
				if ((float)nn / float(nd3) > 2) {
					cout << i << " " << abs(nd3 - nn) << endl;
				}
			}
		}
	}
}
