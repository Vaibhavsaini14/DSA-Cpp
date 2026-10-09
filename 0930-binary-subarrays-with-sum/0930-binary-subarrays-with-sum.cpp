class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return findSubarr(nums , goal) - findSubarr(nums , goal - 1);
    }
    int findSubarr(vector<int> & nums , int goal){
        if(goal < 0) return 0;
        int n = nums.size() ;
        int l = 0 , r = 0 , sum = 0 , cnt = 0;
        while(r < n){
            sum += nums[r];
           while(sum > goal){
            sum -= nums[l];
            l++;
           }
            cnt += r-l+1;
            r++;   
        }
        return cnt;
    }
    
};