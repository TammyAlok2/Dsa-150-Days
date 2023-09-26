//link: https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1
class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
         set<vector<int>>st;    /*Here we will use set so that no duplicacy occurs*/
        int n=arr.size();
        sort(arr.begin(),arr.end()); /*Here we have sorted so that that e1<e2<e3<e4 as per the question */
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                // initialise two pointers to for the last two elements and first(i wala) and second(j wala) will come from loop 
                 int left=j+1;
                 int right=n-1;
                while(left<right){
                    int sum=(arr[i]+arr[j]+arr[left]+arr[right]);
                    if(sum==k) {
                        st.insert({arr[i],arr[j],arr[left],arr[right]});
                        left++;
                        right--;
                    }else if(sum<k) left++;
                    else right--;
                }
            }
        }
        /*Bs ab set me jo store krke rakho ho usko ans me daal do */
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;  /*-> final answer*/
    }
};
