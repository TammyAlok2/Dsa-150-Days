class Solution{
  public:
     int minDist(int a[], int n, int x, int y) {
        // code here
        
        int prevx=-1,prevy=-1,mini=INT_MAX;
        
        for(int i=0;i<n;i++){
            if(a[i]==x){
                if(prevy!=-1){
                    mini=min(mini,i-prevy);
                }
                prevx=i;
            }
            else if(a[i]==y){
                if(prevx!=-1){
                    mini=min(mini,i-prevx);
                }
                prevy=i;
            }
        }
        
        if(prevx==-1 || prevy==-1)
        return -1;
        return mini;
    }

};
