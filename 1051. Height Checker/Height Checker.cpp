#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> needed=heights;
        int sum=0;
        //needed.resize(heights.size());
        //for(int i=0;i<heights.size();++i)needed[i]=heights[i];
        sort(needed.begin(),needed.end());
        for(int i=0;i<heights.size();++i){
            if(heights[i]!=needed[i]){
                ++sum;
            }
        }
        return sum;
    }
};

