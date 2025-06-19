class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // let's make a stack first 
        stack<int>st;

        int n = asteroids.size();

        for( int a : asteroids){
            bool alive = true;

            while(alive && a< 0 && !st.empty() && st.top()>0)
            {
                // it means we have negative element then we have three condition 

                if(abs(a) > st.top()){
                    st.pop();
                }
                else if (abs(a)== st.top()){
                    st.pop();
                    alive = false;
                }
                else {
                    alive = false;
                }

            }

            if(alive){
                st.push(a);
            }
        }

        vector<int>result(st.size());

        for(int i = st.size()-1;i>=0;i--){
            result[i] = st.top();
            st.pop();
        }

        return result ;
        
    }
};