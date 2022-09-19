//8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.
#include<iostream>
float area(int );
int area(int ,int );
float area(float ,float );
using namespace std;
int main()
{
	
	cout<<"area of circle "<<area(4)<<endl;
	cout<<"area of rectangle "<<area(2,4)<<endl;
	cout<<"area of tringle "<<area(9,4); 
}
float area(int r)
{
	return 3.14*r*r;
}
int area(int x,int y)
{
	return x*y;
}
float area(float b,float h)
{
	return (0.5 * b * h);
}
