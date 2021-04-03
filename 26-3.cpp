
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n = 0, s = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; s += a[i];
    }
    cout << s << endl;
    int kp = 0;
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    vector<float> prem(0); vector<float> us(0);
    int sp = 0;
    for (int i = 0; i < n; i++) {
        if (sp + a[i] <= 0.3 * s) {
            kp++;
            sp += a[i];
            cout << a[i] << " " << sp << endl;
            prem.push_back(a[i]);
            a[i] = -1;
        }
        else break;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != -1) {
            us.push_back(a[i]);
           }

    }
    sort(us.begin(), us.end());
    reverse(us.begin(), us.end());
    sort(prem.begin(), prem.end());
    reverse(prem.begin(), prem.end());
    float summ = 0;
    cout.setf(ios_base::fixed);
    for (int i = 0; i < prem.size(); i++) {
        cout << max((prem[i] + us[i]) * 0.8, prem[i] + 0.5 * us[i]) << endl;
        summ = summ + max((prem[i] + us[i]) * 0.8,prem[i] + 0.5 * us[i]);
    }
   
    cout << kp << endl<<summ;
}
