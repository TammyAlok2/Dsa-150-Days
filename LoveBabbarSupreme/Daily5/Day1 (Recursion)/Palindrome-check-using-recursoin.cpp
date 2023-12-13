#include<bits/stdc++.h>
using namespace std;

int Palindrome(string arr, int size , int start ,int last ){
    //base case 
 if(start >= last)
    return true ;

    // one case solution 
   if(arr[start] != arr[last])
   return false ;


    //recursion pe bharosa 
    return  Palindrome(arr,size,start+1,last-1);


}

//time complexity : o(n) space complexity : o(n)

int main(){
string arr = "arra";
int size = arr.length();

int start =0;
int last = size-1;

int ans = Palindrome(arr,size,start,last);
cout<<ans<<endl;


    return 0;
}