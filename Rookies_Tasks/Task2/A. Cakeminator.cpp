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

//problem link : https://codeforces.com/problemset/problem/330/A

void Elghrabawy() {
    int row,col;
	cin>>row>>col; // 3 4
	int arr1[row] = {0},arr2[col] = {0}; 
	// 1 0 1   // 1 0 1 0     c = 8
	for(int i=0;i<row;i++){ // 2
		string line; 
		//  0123
		// "S..."
		// "...."
       //  "..S."
		cin>>line;
		for(int z=0;z<col;z++){ // 2
			if(line[z] == 'S'){
				arr1[i] = 1;
				arr2[z] = 1;
			}
		}
	}
	int ca = 0;
	for(int i=0;i<row;i++){
		for(int z=0;z<col;z++){
			if(arr1[i] == 0 || arr2[z] == 0){
				ca++;
			}
		}
	}
	cout<<ca<<endl;
}

int main() {
    AHMED
    Elghrabawy();


    return 0;
}
