#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans;
        int l_num=0,r_num=0,dis=0;
        bool flag=false;
        for(int i=0;i<S.length();++i){
            if(S[i]=='('){
                ++l_num;
            }
            else if(S[i]==')'){
                ++r_num;
            }
            
            if(l_num==r_num){
                flag=true;
            }
            if(flag){
                for(int j=dis+1;j<l_num*2-1;++j){
                    ans+=S[j];
                }
                flag = false;
                dis=l_num*2;
            }
        }
        return ans;
    }
};

