//6. Define a function to swap data of two int variables using call by reference.
#include<iostream>
using namespace std;
int swap(int &,int &);
int main()
{
	int a,b;
	cout<<"enter the first number:-";
	cin>>a;
	cout<<"enter the second number:-";
	cin>>b;
	cout<<"swap number :-"<<a<<" "<<b;
}
int swap(int &a,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
