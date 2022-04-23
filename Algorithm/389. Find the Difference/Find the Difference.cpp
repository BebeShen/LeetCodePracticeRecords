class Solution {
public:
    char findTheDifference(string s, string t) {
        int cnt[26];
        for(int i=0;i<26;++i)cnt[i]=0;
        
        for(int i=0;i<s.length();++i){
            cnt[s[i]-'a']++;
            cnt[t[i]-'a']--;
        }
        
        cnt[t[t.length()-1]-'a']--;
        for(int i=0;i<26;++i){
            if(cnt[i]!=0){
                return i+'a';
            }
        }
        return -1;
    }
};