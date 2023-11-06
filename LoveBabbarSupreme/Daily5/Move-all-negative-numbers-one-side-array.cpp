//move all negative to left 
void moveAllNeg(int*a, int n ){
    // Dutch nation al algo 
    int l=0,h=n-1;
    while(l<h){
        if(a[l]<0){
            l++;
        }
        else if(a[h]>0){
            h--;
        }
        else{
            swap(a[l],a[h]);
                    }
    }
}