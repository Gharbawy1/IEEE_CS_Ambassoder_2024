// problem link : https://codeforces.com/problemset/problem/705/A
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
    cin>>n;
    if(n==1)cout<<"I hate it";
    if (n>1)cout<<"I hate that";

    for(int i=2; i<n; i++)
    {
        if (i%2==1 && i!=n)
            cout<<" I hate that";
        else if(i%2 == 0 && i!=n)
            cout<<" I love that";
    }
     
    if(n%2==0 && n>1)
        cout<<" I love it";
    else if(n>1)
        cout<<" I hate it";
    cout<<endl;
 

}

int main(){
  MASR 
  Gamila();
  


}
