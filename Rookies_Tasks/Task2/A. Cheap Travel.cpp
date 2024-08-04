
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

//problem link : https://codeforces.com/problemset/problem/466/A

void Elghrabawy(){
    
    int n, m, a, b;
    cin>>n>>m>>a>>b;

    if(m * a > b)
    {
        int remain = (n % m) * a;
        if(remain > b)
            cout<<n / m * b + b<<endl;
        else
            cout<< n / m * b + remain<<endl;
    }
    else
       cout<<n*a;
    
    
    
}


int main(){
    AHMED
    Elghrabawy();
    
    
    
    
}

