// please see changes
#include<iostream>
using namespace std;
class complex
{
		int a,b;
		public:
			friend complex operator>>(istream&,complex);
			friend void operator<<(ostream&,complex);           // change 1 
	
			
};

complex operator>>(istream &din,complex c)
{
		cin>>c.a>>c.b;
		return c;
}

void operator<<(ostream &p,complex c)             // change 2
{
		cout<<c.a<<","<<c.b<<"\n";           // change 3
}
int main()
{
		cout<<"Enter a complex No.";
		complex c1,c2,c3;
		c2=operator>>(cin,c1);
	// 	cout<<c2.a<<c2.b;   // wrong
	                        // can't acess
        operator<<(cout,c2);                          
                                   // change 46b
                                   // ie no use of c3= and it doing nothing
                                   // not necessary of return in cout<<
		cout<<"Hey you enterd complex No.\nand i stored in c1 with help of overloading of extraction operator >>\nand i display it for you";
		cout<<" with overloading of insertion operator <<";
}
