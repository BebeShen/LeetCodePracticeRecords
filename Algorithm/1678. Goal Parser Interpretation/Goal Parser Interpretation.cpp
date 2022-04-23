class Solution {
public:
    string interpret(string command) {
        int length = command.length(), p= 0;
        string ans = "";
        
        while(p<length){
            if(command[p]=='G'){
                ans+="G";
                p++;
            }
            else{
                if(command[p+1]==')'){
                    ans+="o";
                    p+=2;
                }
                else{
                    ans+="al";
                    p+=4;
                }
            }
        }
        return ans;
    }
};