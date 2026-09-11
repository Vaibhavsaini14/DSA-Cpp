class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int res = 0;
        int n = digits.size();
        vector<int> Count(10, 0);
        for(int i = 0; i < n ; i++){
            Count[digits[i]]++;
        }
        for(int i = 1; i <= 9; i++){
            if(Count[i] == 0) continue;
             Count[i]--;
            for(int j = 0 ; j <= 9; j++){
                if(Count[j] == 0) continue;
                 Count[j]--;
                for(int k = 0 ; k <= 8; k+=2){
                    if(Count[k] > 0) res++;
                }
                Count[j]++;
            }
            Count[i]++;
        }
        return res;   
    }
};