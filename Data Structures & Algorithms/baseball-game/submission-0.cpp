class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string  & it:operations){
            if(it=="+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(it=="C"){
                st.pop();
            }
            else if(it=="D"){
                st.push(2*st.top());
            }
            else{
                st.push(stoi(it));
            }
        }
        int sum =0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};