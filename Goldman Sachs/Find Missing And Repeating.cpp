#include<bits/stdc++.h>
using namespace std;
// GFG:- Find Missing And Repeating

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int a1, b;
        vector<int> a(n+1, 0);
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            a[arr[i]]++;
        }
        for(int i=1;i<n+1;i++){
            if(a[i]==0) a1 = i;
            if(a[i]==2) b = i;
        }
        ans.push_back(b);
        ans.push_back(a1);
        return ans;
    }
};
