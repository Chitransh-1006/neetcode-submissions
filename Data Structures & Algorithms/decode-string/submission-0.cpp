class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        
        for (char ch : s) {
            if (ch != ']') {
                st.push(ch);
            } else {
                string temp = "";
                while (!st.empty() && st.top() != '[') {
                    temp += st.top();
                    st.pop();
                }
                
                if (!st.empty()) st.pop();
                
                reverse(temp.begin(), temp.end());
                
                string numStr = "";
                while (!st.empty() && isdigit(st.top())) {
                    numStr += st.top();
                    st.pop();
                }
                reverse(numStr.begin(), numStr.end());
                int n = stoi(numStr);
                
                string repeatedStr = "";
                for (int i = 0; i < n; i++) {
                    repeatedStr += temp;
                }
                
                for (char c : repeatedStr) {
                    st.push(c);
                }
            }
        }
        
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};