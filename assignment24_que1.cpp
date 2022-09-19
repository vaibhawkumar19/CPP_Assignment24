//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
void isPrime(int );
int main()
{
	int n;
	cout<<"enter the number:-";
	cin>>n;
	isPrime(n);
}
void isPrime(int n)
{
	int i;
	for(i=2;i<=n-1;i++)
	{
		if(n%2==0)
			break;
	}
	if(n==i)
		cout<<"prime number";
	else
		cout<<"Not prime number";
			
}
