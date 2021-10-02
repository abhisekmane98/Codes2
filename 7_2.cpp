#include<iostream>
using namespace std;
int main()
{
	    int sum(int,int);    //  local declaration of function
	   
		cout<<"Enter two No.";
		int a,b,c;
		cin>>a>>b;
		c=sum(a,b);  // calling function by passing value
		cout<<c;
		return 0;
}
 int sum(int x,int y)
	    {
	    	int z;
	    	z=x+y;
	    	return z;
		}

