#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string freqAlphabets(string s) {
        int index=s.length()-1,ch_map=49;
        char t;
        string tmp="",ans="";
        while(index>=0){
            if(s[index]=='#'){
                ch_map=(s[index-2]-48)*10+(s[index-1]-48);
                t=ch_map+96;
                tmp+=t;
                index-=3;
            }
            else{
                ch_map=s[index]-48+96;
                t=ch_map;
                tmp+=t;
                index--;
            }
        }
        for(int i=tmp.length()-1,j=0;i>=0;--i){
            ans+=tmp[i];
        }
        return ans;
    }
};

