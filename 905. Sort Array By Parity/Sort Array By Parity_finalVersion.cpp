#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int n=A.size()-1;
        vector<bool> flag(n+1);
        vector<int> ans;
        for(int i=0;i<=n;++i){
            if(A[i]%2==0){
                ans.push_back(A[i]);
                flag[i]=true;
            }
        }
        for(int i=0;i<=n;++i){
            if(A[i]%2!=0 && !flag[i]){
                ans.push_back(A[i]);
            }
        }
        return ans;
    }
};

