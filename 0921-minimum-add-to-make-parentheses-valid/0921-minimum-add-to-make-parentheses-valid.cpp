class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<char> st;
        // int count = 0;
        // for(int i=0 ; i<s.size() ; i++){
        //     if(s[i] == '('){
        //         st.push(s[i]);
        //     }
        //     else if(st.empty() && s[i] == ')'){
        //         st.push('(');
        //         st.push(s[i]);
        //         count++;
        //     }
        //     else if(s[i] == ')'){
        //         st.pop();
        //     }
        //     else(!st.empty()){
        //         count++;
        //         st.pop();
        //     }

        // }
        // return count;

        stack<char> st;
        int count = 0;
        for(int i=0 ; i<s.size() ; i++){
            //opening
            if(s[i]=='('){
                st.push(s[i]);
            }
            //closing
            else{
                if(st.empty()){
                    count++;
                }
                else{
                    st.pop();
                }
            }
        }
            return count + st.size();
    }
};