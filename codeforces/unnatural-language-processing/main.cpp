#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e';
}

void solve() {
    int n;
    cin >> n;
    string word;
    cin >> word;
    string result = "";
    while (!word.empty()) {
        int x;
        if (isVowel(word.back())) {
            x = 2;
        } else {
            x = 3;
        }
        while (x--) {
            result += word.back();
            word.pop_back();
        }
        result += '.';
    }
    result.pop_back();
    reverse(result.begin(), result.end());
    cout << result << endl;
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