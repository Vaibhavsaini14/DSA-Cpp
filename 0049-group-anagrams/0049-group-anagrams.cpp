class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string , vector<string>> mp;
        for(int i = 0; i< strs.size(); i++){
            string ans = strs[i]; 
            sort(begin(ans) , end(ans));
            mp[ans].push_back(strs[i]);
        }
        for(auto n : mp){
            res.push_back(n.second);
        }
        return res;
    }
};