// problem link : https://codeforces.com/contest/520/problem/A
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
  int n;cin>>n;
string s;
cin>>s;
int freq[123] = {0};
for (int i=0;i<s.size();i++)
{
    s[i] = tolower(s[i]);
    freq[s[i]]++;
}
int cnt=  0 ;
for (int i=97;i<=123;i++){
    if (freq[i]!=0){
        cnt++;
    }
}
if (cnt==27){
    cout<<"YES";
}else {
    cout<<"NO";
}
}

int main(){
  MASR 
  Gamila();
  


}
