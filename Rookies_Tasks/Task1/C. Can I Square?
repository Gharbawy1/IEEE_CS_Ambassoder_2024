#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define KAK ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp ' ';
#define ll long long

problem link : https://codeforces.com/contest/1915/problem/C
int main(){
kak


int tc;cin>>tc;
        while (tc--){
            long long bac;cin>>bac;
            long long sum=0;

          for (int i=0;i<bac;i++){
                long long x;cin>>x;
                sum+=x;
          }

           long long l=0;long long r=1e9;
           int flag=0;

            while(l<=r){
               long long mid = l+(r-l)/2;
               if (mid*mid==sum){
                   flag=1;
                   cout<<"Yes"<<endl;break;
               }else if (mid*mid>sum){
                   r=mid-1;
               }else{
                   l=mid+1;
               }
           }

           if (flag == 0){
               cout<<"No"<<endl;
           }
    
           
        }



}
