#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int max=-1,indexofmax=0;
        for(int i=0;i<A.size();++i){
            if(max<A[i]){
                max=A[i];indexofmax=i;
            }
            if(max>A[i]) break;
        }
        return indexofmax;
    }
};

