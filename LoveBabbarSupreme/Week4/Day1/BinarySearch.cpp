#include <iostream>
using namespace std;

int BinarySearch(int arr,int target){
    int start =0;
    int end = arr.size()-1;
    int mid = start +(end-start)/2;

    while(start<end){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid] >target ){
            //left searach 
            end = mid-1;
        }
        else {
            //right search 
            start = mid+1;
        }
        return -1;
    }
}



int main()
{

vector<int>arr{1,2,3,4,5,6,7};
int target = 9;

int ans = BinarySearch(arr,target);

if(ans){
    cout<<"Element found in "<<ans<<endl;
}
else {
    cout<<"not found "<<endl;
}
return 0;
}

