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

//problem link : https://codeforces.com/problemset/problem/719/A

string Elghrabawy() {
    int n;
    cin >> n;
    vector<int> obser(n);
    for (int i = 0; i < n; ++i) {
        cin >> obser[i];
    }
    if (n == 1) {
        if (obser[0] == 0) return "UP";
        if (obser[0] == 15) return "DOWN";
        return "-1";
    }

    int lst = obser[n - 1];
    int seclst = obser[n - 2];

    if (last == 15)return "DOWN";
    if (last == 0) return "UP";
    if (last > seclst) return "UP";
    if (last < seclst) return"DOWN";

    return "-1";
}

int main() {
    AHMED
    cout<<Elghrabawy();


    return 0;
}
