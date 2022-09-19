//10. Write functions using function overloading to add two numbers having different data
//types.
#include<iostream>
using namespace std;
int add(int a,int b);
int add(int c,int d);
//int add(int e,int f);
int main()
{
	cout<<"additon of int "<<add(2,5)<<endl;
	cout<<"addition of float "<<add(9,10)<<endl;
	cout<<"additon of both int or float "<<add(2,5)+add(9,10);
	
}
int add(int a,int b)
{
	return a+b;
}
float add(float c,float d)
{
	return d+c;
}

