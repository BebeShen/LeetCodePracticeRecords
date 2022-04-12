#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string>ans;
        for(int i=0;i<words.size();++i){
            string tmp;
            for(int j=0;j<words[i].length();++j){
                tmp+=table[words[i][j]-'a'];
            }
            ans.insert(tmp);
        }
        
        return ans.size();
    }
    
    string table[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
};

