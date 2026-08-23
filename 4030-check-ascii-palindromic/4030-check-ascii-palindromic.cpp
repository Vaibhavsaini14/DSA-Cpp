class Solution {
public:
    bool isPalindromic(string s) {
        string str = "";
        for(char ch : s){
            int val = ch;
            for(int i = 7; i>= 0; i--){
                if((val >> i) & 1) str += '1';
                else str += '0';
            }
        }
        int l = 0;
        int r = str.size() - 1;
        while(l < r){
            if(str[l] != str[r]) return false;
            l++;
            r--;
            
        }
        return true;
    }
};