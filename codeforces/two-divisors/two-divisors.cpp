#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long int a, b;
    cin >> a >> b;
    long long int g = __gcd(a, b);
    if (g == a) {
        cout << b * b / a << endl;
    } else {
        cout << b * (a / g) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t) {
        solve();
        t--;
    }
}