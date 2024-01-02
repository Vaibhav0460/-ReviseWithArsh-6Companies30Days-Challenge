#include<bits/stdc++.h>
using namespace std;
// Leetcode:- 519. Random Flip Matrix

class Solution {
public:
    int n,m;
    int i = 0,j = 0;
    Solution(int mm, int nn) {
        n = nn;
        m = mm;
    }
    vector<int> flip() {
        int I = i, J = j;
        if(j < n-1) j++;
        else if(i < m-1){
            i++;
            j = 0;
        }
        else{
            i=0;
            j=0;
        }
        return {I,J};
    }
    void reset() {
    }
};
