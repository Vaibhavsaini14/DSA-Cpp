class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int lev = 0;
        for(char ch : s){
            if(ch == '('){
                if(lev > 0) res += ch;
                lev++;
            }
            else if (ch == ')'){
            lev--; 
            if(lev > 0) res += ch; 
            }
        }
        return res;
    }
};

