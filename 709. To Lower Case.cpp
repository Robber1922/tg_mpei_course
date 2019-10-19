//https://leetcode.com/problems/to-lower-case/

class Solution {
public:
    string toLowerCase(string str) {
        for (int i=0; i<str.size();i++){
            str[i]=tolower(str[i]);
        }
            
        return str;
    }
};
