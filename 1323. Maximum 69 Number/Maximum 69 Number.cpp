#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximum69Number (int num) {
        int div=10000,bediv=num;
        while(bediv/div==0 || bediv/div==9){
            bediv%=div;div/=10;
            if(div==0)break;
        }
        return num+3*div;
    }
};

