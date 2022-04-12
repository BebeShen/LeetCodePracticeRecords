#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string new_IP="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                new_IP += "[.]";
            }
            else{
                new_IP += address[i];
            }
        }
        return new_IP;
    }
};

