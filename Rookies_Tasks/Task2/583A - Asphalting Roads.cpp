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

//problem link : https://codeforces.com/problemset/problem/583/A

void Elghrabawy() {
    int n;cin>>n;
    vector<bool> rw_marked(n, false);  
    vector<bool> col_marked(n, false);  
    
    for(int i=1; i<=n*n; i++) {
        int a,b;cin>>a>>b;
    
    if(!rw_marked[a-1] && !col_marked[b-1]) {
            cout<<i<<' ';
            rw_marked[a-1]=true;col_marked[b-1]=true;
        }
        cout<<endl;

    
    }
}

int main() {
    AHMED
    Elghrabawy();


    return 0;
}
