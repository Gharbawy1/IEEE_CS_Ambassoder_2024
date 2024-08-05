
// problem link : https://codeforces.com/problemset/problem/271/A
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

bool IsDistinct(string s){
    set<char> st;
    for (int i = 0;i<s.length();i++){
        st.insert(s[i]);
    }
    if (st.size() == s.length()){
        return true;
    }
    return false;
}
 
void Gamila(){
    string s;cin>>s;
    int n = stoi(s);
    for (int i=n+1;;i++)
    if (IsDistinct(to_string(i))){
        cout<<i;
        return;
    }
}

int main (){
  MASR 
  Gamila();
}
