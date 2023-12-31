#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int a, s;
    string ret = "";
    cin >> a >> s;
    // cout << a << ": " << s << "\n";
    while (s)
    {
        int x = a % 10;
        int y = s % 10;
        int diff = y - x;
        if (x <= y) {
            ret = to_string(diff).append(ret);
        } else {
            s /= 10;
            y += 10 * (s % 10);
            diff = y - x;
            if (x < y && y >= 10 && y <= 19) {
                ret = to_string(diff).append(ret);
            } else {
                cout << "-1" << "\n";
                return;
            }
        }

        a /= 10;
        s /= 10;
    }

    if (a)
    {
        cout << "-1" << "\n";
        return;
    }
    for (int i = 0; i < ret.length(); i++) {
        if (ret[i] != '0') {
            cout << ret.substr(i) << "\n";
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}