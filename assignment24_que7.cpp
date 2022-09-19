//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int defaulte(int a,int b,int c=0)
{
	return a+b+c;
}
int main()
{
	int x,y,z;
	cout<<"enter the two number "<<defaulte(4,5)<<endl;
	cout<<"enter the three number "<<defaulte(4,5,6);
}
