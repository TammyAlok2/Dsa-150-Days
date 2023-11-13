//

   string printMinNumberForPattern(string s){
        string ans;
        int cnt=0,k=0;
        for(int i=0;i<=s.size();i++){
            if(s[i]=='I' || i==s.size()){
                int temp=cnt+1+k;
                while(temp>k)  ans+=char(temp--+'0');
                k+=cnt+1;cnt=0;
            }else cnt++;
        }
        return ans;
    }
