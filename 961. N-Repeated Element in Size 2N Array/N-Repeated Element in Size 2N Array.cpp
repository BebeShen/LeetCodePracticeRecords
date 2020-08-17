#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        bool flag[10001]={false};
        
        for(int i=0;i<A.size();++i){
            if(flag[A[i]])return A[i];
            else{
                flag[A[i]]=true;
            }
        }
        return 0;
    }
};

