#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n;
    cin >> k;
    
    for (int i = 0; i < k; i++) {
        if (n % 10 != 0) {
            n--;
        } else {
            n /= 10;
        }
    }
    cout << n << "\n";
}