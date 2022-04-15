class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        // mismatch = 0
        if(s1.compare(s2)==0)return true;
        
        char c1,c2;
        bool first=true,second=false;
        int index;
        for(int i=0;i<s1.length();++i){
            if(s1[i]!=s2[i]){
                if(first){
                    first = false;second = true;
                    c1 = s1[i];
                    c2 = s2[i];
                }
                else if(second){
                    second = false;
                    index = i;
                }
                else{
                    // mismatch > 2
                    return false;
                }
            }
        }
        // mismatch = 1
        if(second)return false;
        // mismatch = 2
        if(c2==s1[index] && c1==s2[index])
            return true;
        else return false;
    }
};