#include<bits/stdc++.h>
using namespace std;
// Leetcode:- 17. Letter Combinations of a Phone Number

class Solution {
    void solve(string digits, int n, vector<string>& s, string curr, map<char, string> mp){
        if(n==digits.length()){
            if(curr.length()>0) s.push_back(curr);
            return;
        }
        int i;
        for(i=0;i<mp[digits[n]].length();i++){
            solve(digits, n+1, s, curr+mp[digits[n]][i], mp);
            
        }
        
    }
public:
    vector<string> letterCombinations(string digits) {
        map<char, string> mp = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"},};
        vector<string> s;
        solve(digits, 0, s, "", mp);
        return s;
    }
};
