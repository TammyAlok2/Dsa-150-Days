#include <bits/stdc++.h>

using namespace std;

void printSubarray_utils(vector<int>ans,int start ,int end ){
    // base case 
    if(end == ans.size())
    return ;

    //1 case solution 
    for(int i=start;i<=end;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    printSubarray_utils(ans,start,end+1);

}
void printSubarray(vector<int>&nums){
    for(int start =0;start<nums.size();start++){
        int end =start ;
        printSubarray_utils(nums,start,end);
    }
}

int main(){
vector<int>arr{1,2,3,4,5,6};
printSubarray(arr);



return 0;
}