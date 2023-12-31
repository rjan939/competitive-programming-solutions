#include <bits/stdc++.h>
using namespace std;

string abbreviate(string str);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string words[n];
    for (int i = 0; i < n; i++) {
        cin >> words[i];
        if (words[i].length() > 10) {
            words[i] = abbreviate(words[i]);
        }
        cout << words[i] << "\n";
    }

    return 0;
}

string abbreviate(string str) {
    return str[0] + to_string(str.length() - 2) + str[str.length() - 1];
}