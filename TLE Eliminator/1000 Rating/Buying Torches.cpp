#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll k;
    cin >> k;
    while (k--) {
        ll x, y, k;
        cin >> x >> y >> k;
        
        ll minSticks = y * k + k - 1;
        ll xCount = (minSticks + x - 2) / (x - 1); 
        ll total = xCount + k;
        cout << total << endl;
    }
    return 0;
}
