//4. Define a function to print Pascal Triangle up to N lines.
/*       1
	   1   1
	  1  2  1
	1  3  3   1
  1  4   6  4   1*/
#include<iostream>
using namespace std;
int comb(int n,int r);
int fact(int x);
int main()
{
	int i,j,k,n;
	cout<<"enter the name of student ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			int k=0;
			if(j==0)
			while(k++ <= (2-i+1))
				cout<<" ";
				cout<<" "<<comb(i,j);
		}
	cout<<endl;
	}
}
int fact(int x)
{
	int i;
	if(x<=0)
		return 1;
		int fact=1;
		for(i=1;i<=x;i++)
			fact=fact*i;
		return fact;
}
int comb(int n,int r)
{
	int com=fact(n)/(fact(r)*fact(n-r));
return com;
}
	
