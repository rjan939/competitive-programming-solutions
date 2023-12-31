#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;
    long long int product = 1;
    //cout << "test1" << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        product *= num;
    }
    if (2023 % product == 0) {
        int arr[k];
        cout << "YES" << endl;
        for (int i = 0; i < k; i++) {
            arr[k] = 2023 / product;
            cout << arr[k] << " ";
            product = 2023;
        }
        cout << endl;
    } else {
        //cout << "test4" << endl;
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t) {
        solve();
        t--;
    }
}



/*
In a sequence a whose product was equal to 2023, k numbers were removed 
leaving a sequence of b with length n. Given the sequence b, find any suitable sequence a that has a product of 2023. Or state
that such a sequence did not exist. 
*/