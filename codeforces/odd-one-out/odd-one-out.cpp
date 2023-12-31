#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) {
        cout << c;
    } else if (b == c) {
        cout << a;
    } else {
        cout << b;
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t) {
        solve();
        t--;
    }
}