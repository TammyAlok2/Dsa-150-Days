//link:https://practice.geeksforgeeks.org/problems/bleak-numbers1552/1
class Solution
{
public:
	int is_bleak(int n)
	{
	    
	         int mx = max(0,n-31); 
        int cnt= 0;
        for(int i = n-1; i>=mx; i--){
            int p =0;
            int k= i;
            cnt++; 
            while(k){
                p += (k%2);
                k /= 2;
            }
            if(p==cnt)return 0; 
        }
        return 1;
    
	    // Code here.
	}
};
