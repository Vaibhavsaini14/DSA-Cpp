class Solution {
public:
    int maxDepth(string s) {
        int paren = 0;
        int depth =  0;
        for(char ch : s){
            if(ch == '('){
                paren++;
            }
            else if(ch ==  ')'){
                paren--;
            }
            depth = max(paren , depth); 
        }
        return depth;
    }
};