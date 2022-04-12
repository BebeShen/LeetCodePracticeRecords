#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int lnum=0,rnum=0,sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L') lnum++;
            else if(s[i]=='R') rnum++;
            
            if(lnum==rnum){
                sum++;
                lnum=rnum=0;
            }
        }
        return sum;
    }
};

