
// problem link : https://codeforces.com/contest/158/problem/A
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
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
        for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int target = vec[k-1];int count = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] >= target && vec[i] > 0) {
            count++;
        }
    }
    
    cout << count << endl;
}


int main (){
  MASR 
  Gamila();
}
