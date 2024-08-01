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

//problem link : https://codeforces.com/contest/1950/problem/C
void Elghrabawy(string s){
        
        int h = stoi(s.substr(0, 2));
		// cout << h << ln;
		if(h == 12){
			std::cout << s << " PM\n";
		}
		
		else if(h == 0) std::cout << "12" << s.substr(2, 3) << " AM\n";
		else if(h > 12){
			int nh = h - 12;
			
			if(nh <= 9){
			cout << 0 << to_string(nh) << ":" << s.substr(3, 2) <<" "<<"PM\n";
			}			
			else {
			cout << to_string(nh) << ":" << s.substr(3, 2) <<" "<< "PM\n";
			}
			    
			}
		else{
			cout << s << " AM\n";
		}
}

int main (){

AHMED 
int tc;cin>>tc;
while(tc--){
string s;cin>>s;
Elghrabawy(s);


}

}
