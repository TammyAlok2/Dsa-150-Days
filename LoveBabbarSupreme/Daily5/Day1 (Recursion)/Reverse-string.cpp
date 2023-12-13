#include<bits/stdc++.h>
using namespace std;

void Reverse(vector<int>&num,int i,int j)
{
    //base case 
    if(i>j)
    return ;

    //properties
    swap(num[i],num[j]);

//recursion ka kamal 
    Reverse(num,i+1,j-1);
}

int main()
{

    vector<int>num ={1,2,3,4,5,6,7};
    int n = num.size();
    int p =0;
    int j= n-1;
    
    cout<<"before reversing "<<endl;
    for (auto i: num){
        cout<<i<<" ";
    }
    Reverse(num,p,j);

     cout<<"after reversing"<<endl;
    for (auto i: num){
        cout<<i<<" ";
    }




    return 0;
}
