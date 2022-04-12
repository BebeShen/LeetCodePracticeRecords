#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;++i){
            int num=i;
            bool divisible=true;
            while(num!=0){
                int di=num%10;
                if(di==0 || i%di!=0){
                    divisible=false;
                    break;
                }
                num/=10;
            }
            if(divisible){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

