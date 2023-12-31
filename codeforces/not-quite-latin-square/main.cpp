#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<string> square(3);
    for (int i = 0; i < 3; ++i) {
        cin >> square[i];
    }
    unordered_set<char> letters{'A', 'B', 'C'};
    unordered_set<char> missingLetterRow;
    unordered_set<char> missingLetterColumn;

    for (const auto& row : square) {
        missingLetterRow = letters;
        for (char ch : row) {
            missingLetterRow.erase(ch);
        }
        if (missingLetterRow.size() == 1) {
            cout << *missingLetterRow.begin() << '\n';
            return;
        }
    }

    for (int col = 0; col < 3; ++col) {
        missingLetterColumn = letters;
        for (int row = 0; row < 3; ++row) {
            missingLetterColumn.erase(square[row][col]);
        }
        if (missingLetterColumn.size() == 1) {
            cout << *missingLetterRow.begin() << '\n';
            return;
        }
    }
}

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t) {
        solve();
        t--;
    }
}