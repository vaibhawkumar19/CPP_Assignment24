//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int fib(int n);
int main()
{
	int n,flag=0;
	int i,value;
	cout<<"enter the number "<<endl;
	cin>>n;
	for(i=1; ;i++)
	{
		value =fib(i);
		printf(" %d ",value);
		if(n==value)
		{
			flag=1;
			break;
		}
		if(value>n)
		 	break;
	}
	printf("\n");
	if(flag==1)
		cout<<"fibonacci";
	else
		cout<<"not fibonacci";
}
int fib(int n)
{
	int f1=1,f2=1,temp,i;
	if(n<=2)
		return 1;
		for(i=3;i<=n;i++)
		{
			temp=f1+f2;
			f1=f2;
			f2=temp;
		}
	return f2;
}
