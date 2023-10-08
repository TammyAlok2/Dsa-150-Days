#include<iostream>
using namespace std;

int firstOccurence(int arr[], int target,int size){
    int start = 0;
    int end = size-1;
    int mid= start + (end-start)/2;
int ans =-1;
    while(start <=end)
    {
        if(arr[mid] ==target ){
            ans = mid ;
            //left searh 
            end = mid-1;
        }
      else if(arr[mid] > target ){
            //left search 
            end = mid-1;
        }
        else {
            start = mid+1;
        }
         mid= start + (end-start)/2;
         
    }
    return ans;
}

int lastOccurence(int arr[], int target,int size){
    int start = 0;
    int end = size-1;
    int mid= start + (end-start)/2;
int ans =-1;
    while(start <=end)
    {
        if(arr[mid] ==target ){
            ans = mid ;
            //right  searh 
         start = mid+1;
        }
      else if(arr[mid] > target ){
            //left search 
            end = mid-1;
        }
        else {
            start = mid+1;
        }
         mid= start + (end-start)/2;
         
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,2,2,2,2,2,2};
    int target =2;
    int size= 8;
    int ans = firstOccurence(arr,target,size);
    int last = lastOccurence(arr,target,size);
    int totalOccurence = ans+last-1;
    cout<<"Total no of time number occured is"<<totalOccurence<<endl;
    if(last > 0 ){
    	cout<<"Value last occur at index" <<last<<endl;
	}
	else {
		
		cout<<"NOt found"<<endl;
	}
    if(ans>0){
        cout<<"Value first occur at index " <<ans<<endl;
    }
    else{
        cout<<"NOt found"<<endl;
    }
    return 0;
}