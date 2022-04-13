#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0;
        while(n!=0){
            sum+=n%10;
            prod*=n%10;
            n/=10;
        }
        return prod-sum;
    }
};

class FasterSolution {
public:
    int subtractProductAndSum(int n) {
        int pro=1, sum=0;
        while(n>0){
            pro*=n%10;
            sum+=n%10;
            n/=10;
        }
        return pro-sum;
    }
};