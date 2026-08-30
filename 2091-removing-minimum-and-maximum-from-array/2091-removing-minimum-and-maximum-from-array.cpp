class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minm = min_element(begin(nums) , end(nums)) - begin(nums);
        int maxm = max_element(begin(nums) , end(nums)) - begin(nums);

        int left = min(minm , maxm);
        int right = max(minm , maxm);

        return min({ n + 1 + left - right , right + 1 , n - left});
    }
};