#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        int ans = INT_MAX;

        for (int i = 0; i < 32; i++) {
            ll new_b = b + i;
            if (new_b == 1) continue;

            ll x = a;
            int ops = i;
            while (x > 0) {
                x /= new_b;
                ops++;
            }
            ans = min(ans, ops);
        }
        cout << ans << '\n';
    }
    return 0;
}
