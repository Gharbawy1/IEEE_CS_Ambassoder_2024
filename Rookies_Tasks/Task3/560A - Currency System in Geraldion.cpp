
// problem link : https://codeforces.com/problemset/problem/560/A
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
// string to int => stoi(str)
// int to string => std::to_string(int)


void Gamila(){
    int num;
	int arr[1000];
	int i=0;
	int flag=0;
	
    cin>>num;	
	for(; i<num; i++) {
		cin>>arr[i];
		if(arr[i]==1) flag=1;;
	}
	
	if(flag) cout<<"-1";
	else cout<<1;
  return;
}


int main (){
  MASR 
  Gamila();
}
