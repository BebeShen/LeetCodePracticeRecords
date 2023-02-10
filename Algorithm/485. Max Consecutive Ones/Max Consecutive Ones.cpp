class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0, tmp_max=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==1){
                tmp_max++;
            }
            else{
                if(max<tmp_max)
                    max=tmp_max;
                tmp_max=0;
            }
        }
        return max;
    }
};