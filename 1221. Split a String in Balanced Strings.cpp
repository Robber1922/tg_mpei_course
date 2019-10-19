//https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0;
        int r=0;
        int sum=0;
        
        for (int i=0; i<s.size();i++){
            if (s[i]== 'L'){
                l++;
            }
            if (s[i]== 'R'){
                r++;
            }
            
            if (l==r && l!=0){
           sum++;
           l=0;
           r=0; 
        }
             }
        return sum; 
     }
    
};
