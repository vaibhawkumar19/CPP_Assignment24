//2. Define a function to find the highest value digit in a given number.
// 234577=7 is highest number
#include<stdio.h>
#include<iostream>
using namespace std;
int HighestDigit(int );
int main()
{
	int n=123456;
	HighestDigit(n);
	printf("Highest digit is %d",HighestDigit(n));	
}
int HighestDigit(int n)
{
	int max=-1,;
	while(n)
	{
		if(max<n%10)
			max=n%10;
			n=n/10;
	}
	return max;
}

