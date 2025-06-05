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

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        ll cnt = 0;
        ll mini = arr[0] - x, maxi = arr[0] + x;

        for (ll i = 1; i < n; i++) {
            mini = max(mini, arr[i] - x);
            maxi = min(maxi, arr[i] + x);

            if (mini > maxi) {
                cnt++;
                mini = arr[i] - x;
                maxi = arr[i] + x;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
