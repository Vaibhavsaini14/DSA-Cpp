class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int maxm = nums[n-1];
        int moves = 0;
        for(int i = 0; i < n; i++){
            moves += abs(nums[i] - maxm);
        }
        return moves;
       
    }
};