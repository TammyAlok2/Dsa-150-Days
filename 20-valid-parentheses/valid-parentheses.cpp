class Solution {
public:
    bool isValid(string s) {
        // making a stack to store it 
        stack<char>st;

        // iterating in the string to store the element 
        for(char ch : s){
            if(ch == '(' || ch =='{' || ch =='['){
                st.push(ch);
            }
            else {
                // now check if there is no element than 
                if(st.empty()){
                    return false;
                }
                //finding the top elemnent 
                char top = st.top();
                if((top== '(' && ch !=')') || (top =='{' && ch !='}' ) || (top == '[' && ch != ']')){
                    return false;
                }
                // if matches then send 
                st.pop();

            }

        }
       
        
    return st.empty();
    }
};