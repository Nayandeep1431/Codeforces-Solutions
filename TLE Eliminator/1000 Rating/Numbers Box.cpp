#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll k;
    cin >> k;
    while (k--) {
        ll n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        int negCnt = 0;
        int mini = INT_MAX;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                mini = min(mini, abs(arr[i][j]));
                sum += abs(arr[i][j]);
                if (arr[i][j] < 0)
                    negCnt++;
            }
        }
        if (negCnt % 2 == 0)
            cout << sum << endl;
        else
            cout << sum - 2 * mini << endl;
    }
    return 0;
}
