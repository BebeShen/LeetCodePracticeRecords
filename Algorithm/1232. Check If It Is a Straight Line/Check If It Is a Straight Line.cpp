class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int disx = (coordinates[1][0]-coordinates[0][0]);
        int disy = (coordinates[1][1]-coordinates[0][1]);
        for(int i=1;i<coordinates.size()-1;++i){
            int diffx = coordinates[i+1][0] - coordinates[0][0];
            int diffy = coordinates[i+1][1] - coordinates[0][1];
            if(disx*diffy != diffx*disy)
                return false;
        }
        return true;
    }
};