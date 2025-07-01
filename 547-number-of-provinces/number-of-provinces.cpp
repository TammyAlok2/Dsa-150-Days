class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();

        vector<bool>visited(n,false);
        int provinceCount =0;

        for(int city =0;city<n;city++){
            if(!visited[city]){
                stack<int>st;
                st.push(city);

                while(!st.empty()){
                    int current = st.top();
                    st.pop();

                    visited[current]= true;

                    for(int neighbour =0; neighbour<n;neighbour++){
                        if(isConnected[current][neighbour] ==1 && !visited[neighbour]){
                            st.push(neighbour);
                        }
                    }

                }
                provinceCount++;


            }
        }
        return provinceCount;
        
    }
};