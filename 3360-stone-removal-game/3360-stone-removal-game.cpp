class Solution {
public:
    bool canAliceWin(int n) {
        int val = 10;
        int cnt = 0;
        while(n >= val){
            n = n - val;
            val--;
            cnt++;
        }
        if(cnt % 2 == 1) return true;
        else return false;
    }
};