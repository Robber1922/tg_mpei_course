//https://leetcode.com/problems/defanging-an-ip-address/

class Solution {
public:
    string defangIPaddr(string address) {
        for (int i=0; i<address.length();i++){
            if (address[i]=='.'){
                address.replace(i, 1, "[.]");
                i++;
            }
        }
     return address;  
    }
};
