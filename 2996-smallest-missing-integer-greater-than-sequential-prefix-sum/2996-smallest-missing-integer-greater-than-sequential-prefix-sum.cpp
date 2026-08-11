class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s(begin(nums) , end(nums));

        int seqSum = nums[0];
        for(int j = 1; j < n; j++){
            if(nums[j] == nums[j-1] + 1){
                seqSum += nums[j];
            }
            else break;
        }
        while(s.count(seqSum)){
            seqSum++;
        }
        return seqSum;
    }
};