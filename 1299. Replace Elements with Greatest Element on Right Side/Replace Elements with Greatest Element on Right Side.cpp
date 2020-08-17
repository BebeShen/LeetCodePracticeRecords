#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;++i){
            arr[i]=findmax(arr,i);
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
    
    int findmax(vector<int>& arr,int index){
        int max=INT_MIN;
        for(int i=index+1;i<arr.size();++i){
            if(arr[i]>max)max=arr[i];
        }
        return max;
    }
};

