#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        int L=0,U=0;
        for(int i=0;i<moves.length();++i){
            if(moves[i]=='U'){
                ++U;
            }
            else if(moves[i]=='D'){
                --U;
            }
            else if(moves[i]=='L'){
                ++L;
            }
            else if(moves[i]=='R'){
                --L;
            }
        }
        if(L || U) return false;
        else return true;
    }
};
