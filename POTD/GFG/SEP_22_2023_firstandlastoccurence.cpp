//link:https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
         vector<int> ans;
        
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                ans.push_back(i);
                int j=i+1;
                while(arr[i]==arr[j]){
                    j++;
                    
                }
                ans.push_back(j-1);
                i=j-1;
            }
            
        }
        if(ans.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};
