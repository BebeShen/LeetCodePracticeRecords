class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        
        if(m*n != r*c) return mat;
        
        vector<vector<int> > ans;
        ans.resize(r);
        for(int i=0;i<r;i++)ans[i].resize(c);
        // cout<<r<<c<<m<<n;
        for(int i=0;i<r*c;++i){
            // cout<<i/r<<i%c<<i/m<<i%n;
            ans[i/c][i%c] = mat[i/n][i%n];
        }
        return ans;
    }
};