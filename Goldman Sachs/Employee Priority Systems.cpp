#include<bits/stdc++.h>
using namespace std;
// Leetcode:- 2933. High-Access Employees

class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& at) {
        int i, j, k;
        map<string, vector<int>> mp;
        vector<string> s;
        for(i=0;i<at.size();i++){
            mp[at[i][0]].push_back(stoi(at[i][1]));
        }
        for(auto it:mp){
            k=0;
            sort(it.second.begin(), it.second.end());
            for(i=2;i<it.second.size();i++){
                if(it.second[i]-it.second[i-2]<100){
                    k=1;
                    break;
                }
            }
            if(k) s.push_back(it.first);
        }
        return s;
    }
};
