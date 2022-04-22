class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int length = mat.size(), ans=0;
        for(int i=0;i<length;++i){
            if(i == (length-1 - i) ){
                ans += mat[i][i];
            }
            else{
                ans += (mat[i][i] + mat[length-i-1][i]);
            }
        }
        return ans;
    }
};