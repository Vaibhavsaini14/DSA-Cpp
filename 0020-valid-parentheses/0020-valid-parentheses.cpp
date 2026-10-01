class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<int> st;
        for(int i = 0; i < n; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
            else{ 
                if(st.empty()) return false;
                char ch = st.top();
                if((s[i] == ')' && ch != '(') || 
                (s[i] == ']' && ch != '[' )|| 
                (s[i] == '}' && ch != '{')) 
                return false;
                else st.pop();
            } 
        }
        return st.empty();
    }
};