#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long int sum = 0;
    while (n) {
        int num;
        cin >> num;
        sum += num;
        n--;
    }
    long long sr = sqrt(sum);
    if (sr * sr == sum) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << '\n';
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