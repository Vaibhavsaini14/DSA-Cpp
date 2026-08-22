class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 , copy = n;
        int prod = 1;
        while(copy > 0){
            int val = copy % 10;
            sum += val;
            prod *= val;
            copy = copy / 10;
        }
        return n % (sum + prod) == 0;
       
    }
};