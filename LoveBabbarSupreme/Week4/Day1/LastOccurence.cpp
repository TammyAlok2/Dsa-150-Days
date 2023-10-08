#include<iostream>
using namespace std;

int lastOccurence(int arr, int target,int size){
    int start = 0;
    int end = size-1;
    int mid= start + (end-start)/2;
int ans =-1;
    while(start <end)
    {
        if(arr[mid]==target ){
            ans = mid ;
            //right search 
            start = mid+1;
        }
        if(arr[mid] > target ){
            //left search 
            end = mid-1;
        }
        else {
            start = mid+1;
        }
         mid= start + (end-start)/2;
         return -1;
    }
}

int main()
{
    int arr[] = {1,2,2,2,2,2,2,2};
    int target =2;
    int size= 8;
    int ans = lastOccurence(arr,target,size);
    if(ans){
        cout<<"Value first occur at index" <<ans<<endl;
    }
    else{
        cout<<"NOt found"<<endl;
    }
    return 0;
}