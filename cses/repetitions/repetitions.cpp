#include <bits/stdc++.h>
using namespace std;

int main() {
    set<char>Set;
    int max = 0;
    int count = 0;
    string s;
    cin >> s;
    for (int i = 1; i < s.length(); i++) {
        if (s[i - 1] == s[i]) {
            count++
        }
    }
}