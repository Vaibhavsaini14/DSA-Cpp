class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s;
        for (int n : nums){
            s.insert(n);
        }
        int n = k;
        while (s.count(n)) {
            n += k;
        }
        return n;
    }
};