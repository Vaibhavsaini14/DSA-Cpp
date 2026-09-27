class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        int n = source.size();
        int m = target.size();
        if( n != m) return false;
        if(n == 1) return source[0] == target[0];

        long long v1 = 0 , v2 = 0;
        for(int i = 0; i < n; i++){
            v1 += source[i];
        }
        for(int i = 0; i < m; i++){
            v2 += target[i];
        }
        return v1 == v2;
        
        
    }
};