//https://leetcode.com/problems/unique-morse-code-words/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>result{};
        for (auto& i: words){
            string Morse{""};
            for (auto& j: i){
                Morse += morse[j-'a'];
            }
            result.insert(Morse);
        }
        return result.size();
    }
};
