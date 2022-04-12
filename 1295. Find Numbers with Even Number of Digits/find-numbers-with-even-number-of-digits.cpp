#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int j=0;
            while(nums[i]/10!=0){
                nums[i]/=10;
                j++;
            }
            if(j%2!=0)sum++;
        }
        return sum;
    }
};

