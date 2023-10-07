//link:https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1
class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
             string ans = "";
        while(n){
            n--;
            char a = 'A' + n%26;
            ans.push_back(a);
            n/= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
}
