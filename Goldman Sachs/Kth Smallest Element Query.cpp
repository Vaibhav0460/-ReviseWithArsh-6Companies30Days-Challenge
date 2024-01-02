#include<bits/stdc++.h>
using namespace std;
// Leetcode:- 2343. Query Kth Smallest Trimmed Number

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        int i, j, l=nums[0].length();
        vector<vector<pair<string, int>>> v;
        for(i=1;i<=l;i++){
            vector<pair<string, int>> x;
            for(j=0;j<nums.size();j++){
                x.push_back(make_pair(nums[j].substr(l-i, i), j));
            }
            sort(x.begin(), x.end());
            v.push_back(x);
        }
        vector<int> s;
        for(i=0;i<queries.size();i++){
            s.push_back(v[queries[i][1]-1][queries[i][0]-1].second);
        }
        return s;
    }
};
