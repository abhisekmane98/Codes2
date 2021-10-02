// recursion
// again see error
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
	if(a1=1)
	  return a1;
	else
	{
		a1=a1*fact(a1-1);
		return a1;	
    }
}
