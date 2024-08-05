
// problem link : https://codeforces.com/contest/807/problem/A
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<map>
#include<cmath>
using namespace std;
 
#define MASR ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sp ' ';
#define ll long long
const long long oo = 1e18;
const int N1 = 1e3;

void Gamila(){
    int n;
    cin >> n;
    
    vector<pair<int, int>> pa(n);
    bool rated = false;
    
    for (int i = 0; i < n; ++i) {
        cin >> pa[i].first >> pa[i].second;
        if (pa[i].first != pa[i].second) {
            rated = true;
        }
    }
    
    if (rated) {
        cout << "rated" << endl;
        return 0;
    }
    
    for (int i = 1; i < n; ++i) {
        if (pa[i - 1].first < pa[i].first) {
            cout << "unrated" << endl;
            return 0;
        }
    }
    
    cout << "maybe" << endl;
    return 0;
}


int main (){
  MASR 
  Gamila();
}
