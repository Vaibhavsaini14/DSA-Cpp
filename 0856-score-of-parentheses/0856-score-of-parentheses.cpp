class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for (char c : s){
            if(c == '('){
                st.push(0);
            } 
            else{
                int val = st.top();
                st.pop();
                int score = 0;
                if(val == 0){
                    score = 1;
                }
                else score = 2 * val;
                st.top() += score;
            }
        }
        return st.top();
    }
};