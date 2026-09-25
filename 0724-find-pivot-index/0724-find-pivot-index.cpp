class Solution {
public:
    int pivotIndex(vector<int>& nums){
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i< n; i++){
            sum += nums[i];
        }
        int indexSum = 0;
        for(int i = 0; i< n; i++){
            int leftSum = indexSum;
            int rightSum = sum - indexSum - nums[i];
            if(leftSum == rightSum){
                return i;
            }
            indexSum += nums[i];
        }
        return -1;
    }
};