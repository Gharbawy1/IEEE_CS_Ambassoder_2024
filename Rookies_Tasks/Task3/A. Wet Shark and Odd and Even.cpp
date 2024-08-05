// problem link : https://codeforces.com/problemset/problem/621/A
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
  ll n;cin>>n;
  ll arr[n];
  ll min_odd = 1e9 + 1;

  for (ll i=0;i<n;i++)cin>>arr[i];
    
    for (ll i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            min_odd = min(min_odd, arr[i]);
        }
    }
    
    if (n == 1 && arr[0]%2 != 0){
        cout<<0;return;
    }
    else if(n == 1 && arr[0]%2 == 0){
        cout<<arr[0];
        return;
    }
    
    ll pf[n] = {};
    pf[0]=arr[0];
    for (ll i = 1;i<n;i++){
      pf[i] = pf[i-1]+arr[i];
    }
    
    if (pf[n-1]%2==0){
        cout<<pf[n-1];
    }    else{
        cout<<pf[n-1]-min_odd;
    }
}

int main(){
  MASR 
  Gamila();
  
}
