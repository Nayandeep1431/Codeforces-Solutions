#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, D;
    cin >> n >> D;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<ll>());

    ll cnt = 0;
    ll num = 0;

    for (int i = 0; i < n; i++) {
        ll ele = arr[i];
        ll div = (D + ele ) / ele;  // ceil division

        if (num + div <= n) {
            cnt++;
            num += div;
        } else {
            break;
        }
    }

    cout << cnt << endl;
    return 0;
}
