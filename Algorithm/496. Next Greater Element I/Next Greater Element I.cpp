class Solution {
public:
    int find(int target, vector<int>& nums){
        int ans=-1;
        bool startFind=false;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==target)
                startFind=true;
            if(startFind)
                if(nums[i]>target)
                    return nums[i];
        }   
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();++i){
            ans.push_back(find(nums1[i],nums2));
        }
        return ans;
    }
};