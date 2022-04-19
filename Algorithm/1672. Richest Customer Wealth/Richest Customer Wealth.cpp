class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int num_cus = accounts.size(), num_bank = accounts[0].size();
        int max=-1;
        for(int i=0;i<num_cus;++i){
            int sum=0;
            for(int j=0;j<num_bank;++j){
                sum+=accounts[i][j];
            }
            cout<<i<<":"<<sum<<endl;
            if(max<sum)
                max=sum;
        }
        return max;
    }
};