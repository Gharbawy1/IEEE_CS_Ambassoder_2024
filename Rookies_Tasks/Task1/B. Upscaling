#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<map>
#include<cmath>
using namespace std;

#define AHMED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sp ' ';
#define ll long long
const long long oo = 1e18;
const int N1 = 1e3;

problem link : https://codeforces.com/contest/1950/problem/B

void Elghrabawy(int n) {
    char ckbrd[2 * n][2 * n];

    for (int rw = 0; rw < 2 * n; rw++) {
        for (int clmn = 0; clmn < 2 * n; clmn++) {
            if (((rw / 2) + (clmn / 2)) % 2 == 0) {
                ckbrd[rw][clmn] = '#';
            } else {
                ckbrd[rw][clmn] = '.';
            }
        }
    }

    for (int rw = 0; rw < 2 * n; rw++) {
        for (int clmn = 0; clmn < 2 * n; clmn++) {
            cout << ckbrd[rw][clmn];
        }
        cout << endl;
    }
}

int main() {
    AHMED // for speed input and output

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        Elghrabawy(n);
    }

    return 0;
}
