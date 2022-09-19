//9. Write functions using function overloading to find a maximum of two numbers and
//both the numbers can be integer or real.
#include<iostream>
void Maximum(int a,int b);
void Maximum(float c,float d);
using namespace std;
int main()
{
	int flag=1;
	
	int a,b;
	float c,d;
	cout<<"enter the a and b ";
	cin>>a>>b;
	cout<<"enter the c and d ";
	cin>>a>>d;
	Maximum(a,b);
	Maximum(c,d);
//	if(flag==0)
//		cout<<"a is bigger"<<Maximum(4,7)<<	Maximum(3,5);
//	else
//		cout<<"b is bigger"<<Maximum(4,7)<<Maximum(3,5);
	
}
void Maximum(int a,int b)
{
	if(a>b)
	 cout<<"a is max\n";
	else
	 cout<<"b is max\n";
}
void Maximum(float c,float d)
{
	if(c>d)
	 cout<<"c is max";
	 else
	 cout<<" d is max";
}
