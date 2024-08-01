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

NO.Of Solutions : 2 
NOTE : this problem has 3 solutions [binary search -> O(log N) , bf O(N)]

//problem link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
Time : O(N)


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lft = 0 , rit = nums.size()-1;
        //int s,e;
        vector<int>v ;
        bool findS = false,findE=false;
        while(lft<=rit){
            if (findS && findE){
                break;
            }
            if (nums[lft] == target && !findS){
                findS=true;
                v.push_back(lft);
            }else if (!findS){
                lft++;
            }
            if (nums[rit] == target && !findE){
                findE = true;
                v.push_back(rit);
            }else if (!findE){
                rit--;
            }
        }
        if (!findS &&!findE){
            v.clear();
            v.push_back(-1);v.push_back(-1);
        }
        
	std::sort(v.begin(),v.end());
    return v;
    }
};
=====================================================================================
// So let me show U an O(log N) solution using binary search 
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstIndex = -1, lastIndex = -1;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            if(nums[i] == target){
                firstIndex = i;
                break;
            }
        }
        for(int j = size - 1; j >= 0; j--){
            if(nums[j] == target){
                lastIndex = j;
                break;
            }
        }
        return {firstIndex, lastIndex};
    }
};






