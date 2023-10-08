#include<iostream>
using namespace std;

int square (int num)
{
	int start = 0;
	int end = num-1;
	int mid = start + (end-start)/2;
	
	while(start <= end){
		
		if(mid*mid == num){
			return mid;
		}
		else if(mid*mid > num ){
			//left search 
			end = mid-1;
		}
		else {
			//right search 
			start = mid+1;
		}
		 mid = start + (end-start)/2;
	
	
	}
}


int main()
{
	
	int n = 3;
	int ans = square(n);
	cout<<ans<<endl;
	double finalAns = ans;
	int precision = 3;
	double size = 0.1;
	for(int i=0;i<precision;i++)
	{
		for(double j= finalAns;j*j <=n;j=j+size)
		{
			finalAns = j;
		}
		size = size/10;
	}
cout<<finalAns<<endl;
	return 0;
}