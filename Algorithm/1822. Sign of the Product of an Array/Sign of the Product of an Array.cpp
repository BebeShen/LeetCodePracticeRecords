class Solution {
public:
    int arraySign(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)return 0;
            else if(nums[i]<0)
                ans=-ans;
            else
                break;
        }
        return ans;
    }
};

class FasterSolution {
public:
    int arraySign(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        int ans=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)return 0;
            else if(nums[i]<0)
                ans=-ans;
            // else
            //     break;
        }
        return ans;
    }
};