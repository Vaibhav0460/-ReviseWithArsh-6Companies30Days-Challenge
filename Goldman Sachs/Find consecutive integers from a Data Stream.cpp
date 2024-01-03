#include<bits/stdc++.h>
using namespace std;
// Leetcode:- 2526. Find Consecutive Integers from a Data Stream

class DataStream {
    int k, value, c=0;
public:
    DataStream(int value, int k) {
        this->k = k;
        this->value = value;
    }
    bool consec(int num) {
        if(num == value) c++;
        else c=0;
        return c>=k;
    }
};
