
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

problem link : https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        string filtrd;
        for (char c : s) {
            if (isalnum(c)) {
                filtrd += tolower(c);
            }
        }

        int lft = 0, rit = filtrd.length() - 1;
        while (lft < rit) {
            if (filtrd[lft] != filtrd[rit]) {
                return false;
            }
            lft++;rit--;
        }
        return true;
    }
};

