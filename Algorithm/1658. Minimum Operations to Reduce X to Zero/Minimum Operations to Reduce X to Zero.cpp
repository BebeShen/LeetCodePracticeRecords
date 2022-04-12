#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
		int length = nums.size();
        if(nums[0]>x && nums[length-1]>x)return -1;
		int target=-x;
		for(int i:nums)target+=i;
		if(target==0)return length;
		if(target < 0)return -1;
		int j=0;
		int maxLength = -1;
		int sum=0;
		for(int i=0;i<length;++i){
			sum+=nums[i];
			while(sum>target){
				sum-=nums[j++];
			}
			if(sum==target){
				maxLength = max(i-j+1,maxLength);
			}
		}
		return maxLength==-1?-1:length-maxLength;
    }
};

int main(){
	
	return 0;
}
