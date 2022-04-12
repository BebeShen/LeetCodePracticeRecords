#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0;i<A.size();++i){
            flip(A[i]);
        }
        return A;
    }
    void flip(vector<int>& A){
        vector<int>B;
        for(int i=A.size()-1;i>=0;--i){
            A[i]=!A[i];
            B.push_back(A[i]);
        }
        A=B;
    }
};
