class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n = nums.size();
        int val = -1;
        for(int i =0; i<n; i++){
            if(nums[i] != i){
                val = val & nums[i];
            }
        }
        if(val == -1) return 0;
            return val;
    }
};