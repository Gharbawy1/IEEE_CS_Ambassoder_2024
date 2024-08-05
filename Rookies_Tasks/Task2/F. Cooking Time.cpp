// problem link : https://codeforces.com/gym/101498/problem/F
// note that O(N^2) is time limit 
// hint1 : think about suit DataStructre 
// hint2 : think about how to choose the most efficient element that U need to put in the frideg to get another one ! (this is the most critical part in the problem)
// (shit for this problem)
// الحمد لله 
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
// string to int => stoi(str)
// int to string => std::to_string(int)

void Elghrabawy(){
int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> ingredients(n);
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> nextUsage;
        set<int> outside;
        unordered_map<int, int> nextUsageIndex;

        // Read the sequence of ingredients and prepare the nextUsage map
        for (int i = 0; i < n; ++i) {
            cin >> ingredients[i];
            nextUsage[ingredients[i]].push(i);
        }

        int openCount = 0;

        for (int i = 0; i < n; ++i) {
            int ingredient = ingredients[i];
            nextUsage[ingredient].pop();
            nextUsageIndex[ingredient] = nextUsage[ingredient].empty() ? INT_MAX : nextUsage[ingredient].top();

            if (outside.count(ingredient)) {
                continue;
            }

            if (outside.size() == k) {
                int toRemove = -1;
                int farthestUse = -1;

                for (int outIngredient : outside) {
                    if (nextUsageIndex[outIngredient] > farthestUse) {
                        farthestUse = nextUsageIndex[outIngredient];
                        toRemove = outIngredient;
                    }
                }

                outside.erase(toRemove);
            }

            outside.insert(ingredient);
            openCount++;
        }

        cout << openCount << '\n';
    }
}



int main (){

  AHMED
  Elghrabawy();

}
