#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
        srand(time(NULL));
        int sum=0;
        for(int i=0;i<n-1;++i){
            int x = rand()%9999+(-5000);
            while(find(arr,x))x = rand()%9999+(-5000);
            sum+=x;
            arr.push_back(x);
        }
        arr.push_back(-sum);
        return arr;
    }
    
    bool find(vector<int>arr,int val){
        for(int i=0;i<arr.size();++i){
            if(arr[i]==val)return true;
        }
        return false;
    }
};

