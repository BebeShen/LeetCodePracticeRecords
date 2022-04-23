class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int ns1 = word1.length(), ns2 = word2.length();
        string ans;
        bool ns1b = (ns1>ns2)?true:false;
        int sl = (ns1b)?ns2:ns1;
        
        for(int i=0;i<sl;++i){
            ans += word1[i];
            ans += word2[i];
        }
        
        if(ns1b)
            ans += word1.substr(ns2,ns1-ns2);
        else
            ans += word2.substr(ns1,ns2-ns1);
        
        
        return ans;
    }
};

class FasterSolution {
public:
    string mergeAlternately(string word1, string word2) {
        int ns1 = word1.length(), ns2 = word2.length(), i=0, j=0;
        string ans="";
        while(i<ns1 || j<ns2){
            if(i<ns1){
                ans += word1[i++];
            }
            if(j<ns2){
                ans += word2[j++];
            }
        }
        
        return ans;
    }
};