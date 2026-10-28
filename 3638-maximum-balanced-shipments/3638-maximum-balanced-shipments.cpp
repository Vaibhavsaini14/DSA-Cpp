class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int res = 0, maxm = 0;
        for(int n : weight) {
            maxm = max(maxm , n);
            if(n < maxm){
                res++;
                maxm = 0;
            }
        }
        return res;
    }
};