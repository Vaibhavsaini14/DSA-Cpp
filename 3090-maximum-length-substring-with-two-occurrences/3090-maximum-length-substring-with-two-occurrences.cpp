class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char , int> mp;
        int i = 0 , res = 0 , n = s.size();
        for(int j = 0; j < n; j++){
            mp[s[j]]++;
            while(mp[s[j]] > 2){
                mp[s[i++]]--;
            }
            res = max(res , j - i + 1);
        }
        return res;
    }
};