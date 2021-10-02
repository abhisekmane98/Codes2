#include<iostream>
using namespace std;
int main()
{
	    int sum(int &,int &);
		int a,b,c;
		cout<<"Enter two values";
		cin>>a>>b;
		c=sum(a,b);
		cout<<c;
}
int sum(int &p,int &q)
{
	return(p+q);
}
