

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, s = 0;
	cin >> n;
	int ost[100], temp[100];
	for (int i = 0; i < 100; i++) {
		ost[i] = 1000000;
	}
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		s += max(a, b);
		for (int j = 0; j < 100; j++) {
			temp[j] = ost[j];
		}
		int rasn = abs(a - b);
		if (rasn != 0 && rasn%100!=0) {
			for (int j = 1; j <= 100; j++) {
				if (rasn + ost[j % 100] < ost[(rasn + j) % 100]) {
					temp[(rasn + j) % 100] = rasn + ost[j % 100];
				}
			}
			if (rasn < ost[rasn % 100]) {
				temp[rasn % 100] = rasn;
			}
		}
		for (int j = 0; j < 100; j++) {
			ost[j] = temp[j];
		}
	}
	cout << s << endl;
	for (int i = 0; i < 100; i++) {
		cout << i << " " << ost[i]<<endl;
	}
}

