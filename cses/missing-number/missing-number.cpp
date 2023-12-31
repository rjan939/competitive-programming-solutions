#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;

    long long int sum = n * (n + 1) / 2;
    for (int i = 0; i < n - 1; i++) {
        long long int num;
        cin >> num;
        sum -= num;
    }
    cout << sum << "\n";
}