#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum=0;
        for(int i=0;i<points.size()-1;++i){
            int now_x=points[i][0],now_y=points[i][1];
            int next_x=points[i+1][0],next_y=points[i+1][1];
            
            int dist_x=abs(next_x-now_x);
            int dist_y=abs(next_y-now_y);
            
            sum+=(dist_x>dist_y)?dist_x:dist_y;
        }
        return sum;
    }
};

