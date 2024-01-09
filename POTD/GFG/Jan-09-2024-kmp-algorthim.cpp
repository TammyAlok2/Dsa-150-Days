class Solution
{
    public:
        vector <int> search(string pat, string txt)
       {
            //code her
            int n=pat.size();
            pat+='#';
            pat+=txt;
              int kmp[pat.size()]={0};
              vector<int>ans;
               for(int i=1;i<pat.size();i++){
                   int x=kmp[i-1];
                   
                   while(x>0 && pat[i]!=pat[x]) x=kmp[x-1];
                   if(pat[x]==pat[i]) x++;
                   kmp[i]=x;
                   
                   if(x==n){
                        // cout<<i<<"  "<<n<<endl;
                       ans.push_back(i-2*n+1);
                   }
               }
               
               if(ans.size()==0) return {-1};
               return ans;
        }

     
};
