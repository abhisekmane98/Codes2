#include<iostream>
using namespace std;
int add(int,int);  // global declaration
int main()
{
		int a,b,c;
		cout<<"Enter two values";
		cin>>a>>b;
		cout<<add(a,b);
		return 0;
}
int add(int x,int y)
{
		return (x+y);
}
