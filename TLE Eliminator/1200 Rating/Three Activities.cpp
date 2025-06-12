#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<ll, int>> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            a[i] = {x, i};
        }
        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            b[i] = {x, i};
        }
        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            c[i] = {x, i};
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());

        int limit = min(100, n);
        ll ans = 0;

        for (int i = 0; i < limit; i++) {
            for (int j = 0; j < limit; j++) {
                for (int k = 0; k < limit; k++) {
                    int d1 = a[i].second;
                    int d2 = b[j].second;
                    int d3 = c[k].second;

                    if (d1 != d2 && d1 != d3 && d2 != d3) {
                        ll sum = a[i].first + b[j].first + c[k].first;
                        ans = max(ans, sum);
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
