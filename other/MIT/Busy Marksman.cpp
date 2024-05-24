#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector <int> targets(N);
    for (int i = 0; i < N; ++i) {
        cin >> targets[i];
    }

    vector<int> sequence;
    int odd_needed = 0, even_needed = 0;
    for (int i = 0; i < N; i++) {
        odd_needed += (targets[i] + 1) / 2;
        even_needed += targets[i] / 2;
    }

    int total_targets = accumulate(targets.begin(), targets.end(), 0);
    int available_odd = (total_targets + 1) / 2;
    int available_even = total_targets / 2;

    if (odd_needed <= available_odd && even_needed <= available_even) {
        cout << "YES\n";
        int shot_number = 1;
        vector<int> shots;
        for (int lane = 0; lane < N; lane++) {
            for (int count = 1; count <= targets[lane]; count++) {
                shots.push_back(lane + 1);
            }
        }
        for (int s : shots) {
            cout << s << " ";
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