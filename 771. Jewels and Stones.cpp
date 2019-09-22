//https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
      int st=0;
       for (char s: S){
           for (char j: J){
               if (s==j){
                    (st+=1);
               }
           }
       }
        return st;       
    }
};
