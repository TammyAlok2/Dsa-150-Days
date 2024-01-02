 long long sum=0,prev=0,maxi=0;
        int i=0,j=0;
        
        while(i<k){
            sum=sum+a[i++];
        }
        maxi=sum;
        
        while(i<n){
            sum=sum+a[i++];
            prev=prev+a[j++];
            maxi=max(maxi,sum);
        
        if(prev<0){
            sum=sum-prev;
            prev=0;
            maxi=max(maxi,sum);
        }
        }
        return maxi;
