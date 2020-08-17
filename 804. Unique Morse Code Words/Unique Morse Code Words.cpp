#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>ans;
        int Diff=0;
        for(int i=0;i<words.size();++i){
            string tmp = transform(words[i]);
            if(diff(ans,tmp)){
                ans.push_back(tmp);
                ++Diff;
            }
        }
        
        return Diff;
    }
    
    vector<string>table={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    string transform(string s){
        string tmp;
        for(int i=0;i<s.length();++i){
            tmp+=table[s[i]-'a'];
        }
        return tmp;
    }
    
    bool diff(vector<string>ans,string tmp){
        for(int i=0;i<ans.size();++i){
            if(tmp==ans[i]) return false;
        }
        return true;
    }
};

