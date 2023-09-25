#include<iostream>
using namespace std;

void inc(int number)
{
	number = number +10;
	cout<<number<<endl;
}

int main()
{
	int a =10;
	inc(a);
	cout<<a<<endl;
	
	return 0;
}