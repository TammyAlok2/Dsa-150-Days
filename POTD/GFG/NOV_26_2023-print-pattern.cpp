class Solution{
public:
    vector<int> pattern(int N){
        // code here
        vector<int>ans;
                int x =N;
        while(x>0){
            ans.push_back(x);
            x= x-5;
        }
        ans.push_back(x);
        
         while(x<N){
             x = x+5;
             ans.push_back(x);
         }
         
        
      return ans;  
    }
};
