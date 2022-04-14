class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minIndex=-1, min=INT_MAX;
        
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x && points[i][1]==y) return i;
            if(points[i][0]==x || points[i][1]==y){
            int matd = abs(x-points[i][0])+abs(y-points[i][1]);
                if(min>matd){
                    min = matd;
                    minIndex = i;
                }
            }
        }
        return minIndex;
    }
};