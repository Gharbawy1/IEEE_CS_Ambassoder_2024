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
 
//problem link : https://codeforces.com/contest/749/problem/A

void Elghrabawy(){
    int n;
    cin >> n;
 
    vector<int> primes;
    if (n % 2 == 0) {
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++) {
            primes.push_back(2);
        }
    } else {
        // use (n-3)/2 twos and one three
        cout << (n / 2) << endl;
        for (int i = 0; i < n / 2 - 1; i++) {
            primes.push_back(2);
        }
        primes.push_back(3);
    }
 
    for (int i = 0; i < primes.size(); i++) {
        if (i > 0) cout << " ";
        cout << primes[i];
    }
    cout << endl;
 
}
/*
4 3
17924 4 4 17924
 
3 
2
 
*/
 
 
int main(){
    AHMED
    Elghrabawy();
    
    
    
    
}
