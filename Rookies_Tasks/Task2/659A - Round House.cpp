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

//problem link : https://codeforces.com/problemset/problem/659/A

void Elghrabawy() {
    int n, a, b;
    cin >> n >> a >> b;

    //  range -n to n
    b = b % n;

    int f_p = (a + b) % n;
    if (f_p <= 0) {
        f_p += n;
    }

    cout << f_p << endl;
}

int main() {
    AHMED
    Elghrabawy();


    return 0;
}
