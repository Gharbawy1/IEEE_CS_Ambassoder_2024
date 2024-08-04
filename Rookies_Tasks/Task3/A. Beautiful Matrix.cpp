// problem link : https://codeforces.com/contest/263/problem/A
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
  int r = 0;
    int c=0;
    int arr[5][5];
    for (int row =0; row <5; row++)
    {
        for (int coul = 0; coul<5; coul++)
        {
            cin>>arr[row][coul];
            if (arr[row][coul]==1)
            {
                r= row;
                c=coul;
            }
        }
 
 
    }
 
 
    int res = abs((r+1)-3)+abs((c+1)-3);
// r= 2    c=5
    cout<<res;

}

int main(){
  MASR 
  Gamila();
  


}
