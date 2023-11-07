 int s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j>=i) s1+=matrix[i][j];
                if(j<=i) s2+=matrix[i][j];
                
            }
        }
        vector<int> ans;
        ans.push_back(s1);
         ans.push_back(s2);
         return ans;
