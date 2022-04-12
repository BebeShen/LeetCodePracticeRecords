#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string S) {
        string tmp,ans;
        int l_num=0,r_num=0;
        bool flag=false;
        for(int i=0;i<S.length();++i){
            if(S[i]=='('){
                flag = false;
                tmp+='(';
                ++l_num;
            }
            else if(S[i]==')'){
                flag=false;
                tmp+=')';
                ++r_num;
                
            }
            
            if(l_num==r_num){
                l_num=r_num=0;
                flag=true;
                
            }
            if(flag){
                string ttmp;
                for(int j=1;j<tmp.length()-1;++j){
                    ttmp+=tmp[j];
                }
                cout<<tmp<<endl;
                ans+=ttmp;
                tmp="";
            }
        }
        return ans;
    }
};
