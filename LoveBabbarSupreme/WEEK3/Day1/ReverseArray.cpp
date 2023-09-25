#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<< " ";
	}
}

int main(){
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int size = 9;
	int start = 0;
	int last = 9;
	while(start<=last){
		swap(arr[start],arr[last]);
		start++;
		last--;
	}
	printArray(arr,size);
	
	return 0;
}