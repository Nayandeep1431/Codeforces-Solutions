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

        vector<ll> fre(26, 0);
        for (ll i = 0; i < s.length(); i++)
            fre[s[i] - 'a']++;

        ll odd = 0;
        for (int i = 0; i < 26; i++)
            odd += fre[i] % 2;

        if (odd > x + 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
