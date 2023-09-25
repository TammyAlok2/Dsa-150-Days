#include<iostream>
using namespace std;

int main()
{
	
	int arr[5]= {10,20,30,40,50};
	int size = 5;
	
	bool ans =0;
	int key = 10;
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			ans =1;
		}
	}
	if(ans){
		cout<<"Found"<<endl;
	}
	else {
		cout<<"not found"<<endl;
	}
	return 0;
}