#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m), c(m);

    for (int i = 0; i < m; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    if (m % 2 == 1) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << 1;
        }
        cout << "\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t) {
        solve();
        t--;
    }
}