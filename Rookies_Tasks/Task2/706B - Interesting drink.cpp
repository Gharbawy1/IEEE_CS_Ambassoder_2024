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

//problem link : https://codeforces.com/problemset/problem/706/B
// hint : use binary search to find the number of prices that are less than or equal to the given amount.

void Elghrabawy() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    sort(prices.begin(), prices.end());
    int q;
    cin >> q;
    vector<int> results(q);
    for (int i = 0; i < q; ++i) {
        int mi;
        cin >> mi;
        // upper_bound find NO. of shops where price <= mi
        results[i] = upper_bound(prices.begin(), prices.end(), mi) - prices.begin();
    }
    for (int i = 0; i < q; ++i) {
        cout << results[i] << endl;
    }

    
}

int main() {
    AHMED
    Elghrabawy();


    return 0;
}
