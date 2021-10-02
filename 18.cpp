// recursion
#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int a,c;
	cout<<"Enter a number";
	cin>>a;
	c=fact(a);
	cout<<c;
}
int fact(int a1)
{
	int b;
	for(b=1;a1>=1;a1--)
	   b=b*a1;
	return b;	
}
