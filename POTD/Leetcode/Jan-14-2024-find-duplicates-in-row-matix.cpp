class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        set<vector<int>> st;
        vector<int> ans;
        int i=0;
        for(auto x : matrix){
            if(st.find(x)==st.end()) st.insert(x);
            else{
                ans.push_back(i);
                
            }
            i++;
        }
        return ans;
      
    } 
};
