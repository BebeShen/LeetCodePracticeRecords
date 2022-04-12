#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int arr[n][m],count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=0;
            }
        }
        
        for(int i=0;i<indices.size();++i){
            for(int j=0;j<m;++j){
                arr[indices[i][0]][j]++;
            }
            for(int j=0;j<n;++j){
                arr[j][indices[i][1]]++;
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(arr[i][j]%2!=0) count++;
            }
        }
        return count;
    }
};
