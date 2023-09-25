#include<iostream>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<< " ";
	}
}

int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90};
	int size = 10;
	int start = 0;
	int last = 8;
	
	while(start<last){
		cout<<arr[start]<<endl;
		cout<<arr[last]<<endl;
		
		start++;
		last--;
	}
	
	return 0;
}