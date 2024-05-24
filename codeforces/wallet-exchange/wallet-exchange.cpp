#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int a, b;
    cin >> a >> b;


    if ((a + b) %  2 == 0) {
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
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