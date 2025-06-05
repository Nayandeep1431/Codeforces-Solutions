#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;

        string s;
        cin >> s;

        vector<ll> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + (s[i] == 'W');
        }

        ll ans = LLONG_MAX;
        for (int i = 0; i <= n - x; i++) {
            ll val = prefix[i + x] - prefix[i];
            ans = min(ans, val);
        }

        cout << ans << endl;
    }
    return 0;
}
