//link:https://www.geeksforgeeks.org/problems/find-transition-point-1587115620/1
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        //related to first occurence 
        
        int start =0 ;
        int end = n-1;
        int ans = -1;
        while(start <= end ){
            int mid = (start + end )/2;
            if(arr[mid]==1){
               ans = mid;
               //left search 
               end = mid -1;
               
            }
            else if (arr[mid] == 0){
                //right search 
                start = mid +1;
            }
            mid = (start +end)/2;
        }
        return ans;
    }
};
