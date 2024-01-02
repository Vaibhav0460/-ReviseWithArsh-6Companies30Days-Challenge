#include<bits/stdc++.h>
using namespace std;
// Leetcode:- 2513. Minimize the Maximum of Two Arrays

#define ll long long
class Solution {
    ll getGCD(int a,int b){if(b==0)return a;return getGCD(b,a%b);}
public:
    int minimizeSet(int div1, int div2, int cnt1, int cnt2) {
        ll low=1, high=INT_MAX, ans=INT_MAX, mid, t1, t2, g, l, t;
        while(low<=high){
            mid=(low+high)/2;
            t1=mid-mid/div1;
            t2=mid-mid/div2;
            g=getGCD(div1,div2);
            l=(ll)(((ll)div1)*((ll)div2))/g;
            t=mid-mid/l;
            if(t1>=cnt1 and t2>=cnt2 and t>=cnt1+cnt2){
                high=mid-1;
                ans=min(ans,mid);
            }
            else low=mid+1;
        }
        return ans;
    }

};
