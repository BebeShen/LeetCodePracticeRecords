#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size()-1;
        findmax(arr,n);
        arr[n]=-1;
        return arr;
    }
    
    void findmax(vector<int>& arr,int index){
        int max=arr[index];cout<<max;
        for(int i=index-1;i>=0;--i){
            if(max<arr[i]){
                int tmp=arr[i];
                arr[i]=max;
                max=tmp;
            }
            else{
                arr[i]=max;
            }
        }
    }
};

