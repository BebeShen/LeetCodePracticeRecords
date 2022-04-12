#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int index = 0;
        for(int i = 0; i < A.size(); i++)
            if(A[i] % 2 == 0)   swap(A[index++], A[i]);
        return A;
    }
    
};

