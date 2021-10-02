// find error
#include<iostream>
using namespace std;
int main()
{
	    int sum(int,int);    // declaration of function
	    int sum(int x,int y)
	    {
	    	int z;
	    	z=x+y;
	    	return z;
		}
		cout<<"Enter two No.";
		int a,b,c;
		cin>>a>>b;
		c=sum(a,b);  // calling function by passing value
		cout<<c;
		return 0;
}

