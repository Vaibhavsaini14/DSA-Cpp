class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minm = *min_element(begin(nums1) , end(nums1));
        if(minm % 2 == 1) return true;
        for(int n : nums1){
            if(n % 2 == 1) return false;
        }
        return true;
    }
};