//3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int CalculatePower(int ,int );
int main()
{
	int a,b;
	cout<<"enter the value of a ";
	cin>>a;
	cout<<"enter the value of b ";
	cin>>b;
	cout<<a<<" power "<<b<<" is:-"<<CalculatePower(a,b);
}
int CalculatePower(int x,int y)
{
	int a;
	a=1;
	while(y--)
	{
		a=a*x;
	}
return a;
}
