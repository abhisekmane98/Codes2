#include<iostream>
using namespace std;
int main()
{
		cout<<"Enter a five digit No.";
		int x;
		int x1,x2,x3,x4,x5,sum;
		int a2,a3,a4;
		cin>>x;
		x5=x%10;
		a2=x%100;
		x4=a2/10;
		a3=x%1000;
		x3=a3/100;
		a4=x%10000;
		x2=a4/1000;
		x1=x/10000;
		sum=x1+x2+x3+x4+x5;
		cout<<"x1+x2+x3+x4+x5=sum\n"<<x1<<"+"<<x2<<"+"<<x3<<"+"<<x4<<"+"<<x5<<"="<<sum;
		return 0;
		
}
