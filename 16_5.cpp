#include<iostream>
using namespace std;
class complex                 
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter complex No.";
			cin>>a>>b;
		}
		complex add(complex); // declaration of member defined outside the class
		void display()
		{
			cout<<a<<","<<b;  // last error
		}
};
complex complex :: add(complex c)           // making member function by applying membership label by usin g scope resolution operator      
{
	    complex temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return temp;
};
int main()
{
		complex c1,c2,c3;
		c1.input();
		c2.input();
		c3=c1.add(c2); 
		c3.display();
		return 0;
}
