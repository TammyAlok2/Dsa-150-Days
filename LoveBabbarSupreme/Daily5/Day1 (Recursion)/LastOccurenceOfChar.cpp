
#include<bits/stdc++.h>
using namespace std;


// last to first approach 
int LastOccurence(vector<char>&num,int n, int i,char v){
//base case 
if(n <0){
    return -1 ;
}
// properties 
if(num[i] ==v)
return i ;
//recursion sambal lega 
LastOccurence(num,n,i-1,v);
    }

//using from first  approach 
    int LastOccurence2 (vector<char>&num,int n, int i,char v,int ans ){
    

        //base case 
if(i>=n){
    return ans ;
}
if(num[i] == v)
ans = i;

//
LastOccurence2(num,n,i+1,v,ans);
    }

int main()
{
    vector<char>arr ={'a','b','c','d','d','e','f','d'};
    int n= arr.size();
    char value = 'd';
    int i=n;
    int ans1 = LastOccurence(arr,n,i,value);
    cout<<ans1<<endl;
    int j =0;
    int ans =-1;
    int ans2 = LastOccurence2(arr,n,j,value,ans);
    cout <<ans2<<endl;
    // using stl function to find the last occurence
    cout<<strchr(d)<<endl;
    return 0;
}
