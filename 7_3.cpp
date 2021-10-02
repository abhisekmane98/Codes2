#include<iostream>
using namespace std;
int main()
{
	    int sum(int*,int*);
		int a,b,c;
		cout<<"Enter two No.";
		cin>>a>>b;
		c=sum(&a,&b);
		cout<<c;
		return 0;
}
int sum(int *p,int *q)
{
		return(*p+*q);
}
