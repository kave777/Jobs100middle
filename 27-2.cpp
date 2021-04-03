

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n, s = 0;
	cin >> n;
	vector<int> dif(0);
	int k3 = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		int aa = min(a, b), bb = max(a, b);
		int rasn = abs(a - b);
		s += aa;
		if (aa % 3 == 0) k3++;
		if (aa%3==0 && bb%3!=0) {
			dif.push_back(bb - aa);
		}
	}
	cout << s << " " << k3 << " " << n<<endl;
	sort(dif.begin(), dif.end());
	for (int i = 0; i < dif.size(); i++) {
		cout << dif[i] << endl;
	}
	int q = 0;
	while (k3 > n / 3) {
		s += dif[q];
		q++;
		k3--;
	}
	cout << s;
}

