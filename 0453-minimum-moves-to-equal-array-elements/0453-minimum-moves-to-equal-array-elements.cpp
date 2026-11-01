class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int minm = nums[0];
        int cnt = 0;
        for(int i = 0; i < n; i++){
            minm = min(minm , nums[i]);
        }
        for(int i = 0; i < n; i++){
            cnt += nums[i] - minm;
        }

        return cnt;
       
    }
};