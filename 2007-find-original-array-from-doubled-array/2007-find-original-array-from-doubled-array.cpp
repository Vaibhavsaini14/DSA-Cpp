class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if( n  % 2 != 0) return {};
        sort(begin(changed) , end(changed));
        unordered_map<int , int> mp;
        for(int i = 0; i < n; i++){
            mp[changed[i]]++;
        }
        vector<int> res;
        for(int i = 0; i< n ; i++){
            int val = 2 * changed[i];
            if(mp[changed[i]] == 0) continue;
            if(mp.find(val) == mp.end() || mp[val] == 0) return {};
            res.push_back(changed[i]);
            mp[changed[i]]--;
            mp[val]--;
        }  
        return res;
       
    }
};