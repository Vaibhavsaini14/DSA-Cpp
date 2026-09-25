class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i< n; i++){
            sum += nums[i];
        }
        int indexSum = 0;
        for(int i = 0; i< n; i++){
            int lSum = indexSum;
            int rSum = sum - indexSum - nums[i];
            if(lSum == rSum){
                return i;
            }
            indexSum += nums[i];
        }
        return -1;
    }
};