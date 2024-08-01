#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define KAK ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp ' ';
#define ll long long

problem link : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
No.Of Soultions : 2 
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // O(N^2) approach , O(1) space
        int curr_indx = 0;long long max = 0;
        long long cnt = arr.size()-1;
        while(cnt--){
            max = 0;
            
        for (int i = curr_indx+1;i<arr.size();i++){
            if (arr[i]>max){
                max = arr[i];
            }
        }
        if (curr_indx == arr.size()-2){
            // make sure that we arrive to the last 2 elments
            arr[arr.size()-2] = arr[arr.size()-1];
        }
        else{
            arr[curr_indx] = max;
        }
        curr_indx++;
    }
        arr[arr.size()-1]=-1;
        return arr; 
    }
};
=========================================================================
class Solution {
public:
// O(N) approach , O(1) space
    vector<int> replaceElements(vector<int>& arr) {

    int n = arr.size();
        if (n == 0) return arr;
        
        int max_from_right = arr[n-1];
        arr[n-1] = -1;
        
        for (int i = n - 2; i >= 0; --i) {
            int temp = arr[i];
            arr[i] = max_from_right;
            if (temp > max_from_right) {
                // make sure that the temp is larger from all the prev elments 
                max_from_right = temp;
            }
        }
        
        return arr;
}
};
