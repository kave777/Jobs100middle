#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	ifstream in("26-1.txt");
	int n, mz;
	cin >> n >> mz;
	int cn = 0, cz = 0, ccn = 0, ccz = 0;
	vector<int> files(n);
	for (int i = 0; i < n; i++)cin >> files[i];
	sort(files.begin(), files.end());
	/*for (int i = 0; i < n; i++) {
		cout << files[i] << endl;
	}*/
	while (mz >= files[0]) {
		sort(files.begin(), files.end());
		int ii = 0,me=0;
		ccz = 0;
		for (int i = 0; i < files.size(); i++) {
			if (ccz + files[i] <= mz) {
				ii = i;
				ccz += files[i];
				me = files[i];
			}
		}
		int iii = -1;
		for (int i = ii-2; i < files.size(); i++) {
			if (ccz + files[i] - me <= mz) {
				ccz =ccz + files[i] - me;
				me = files[i];
				iii = i;
			}
		}
		cz += me;
		cn++;
		if(iii!=-1)files[iii]=100000;
		mz -= me;
		sort(files.begin(), files.end());
		//cout << cn << " " << cz << " " << mz << " " << files[0] << endl;
	}
	cout << cn << " " << cz;
}
