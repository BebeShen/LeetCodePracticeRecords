#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
        arr.resize(n);
        int x = 1;
        for(int i=0;i<n-1;i+=2){
            arr[i] = x;
            arr[i+1] = -x;
            ++x;
        }
        if(n%2!=0)arr[n-1] = 0;
        return arr;
    }
};

