int isPossible(int N , int coins[]) 
    {
        function<bool(int,int)>help = [&](int i , int s)->bool{
            if(i==N)
            {
                return s!=0&&(s%20==0||s%24==0||s==2024);
            }
            bool res = help(i+1,s+coins[i]) || help(i+1,s);
            return res;
        };
        
        return help(0,0);
    }
