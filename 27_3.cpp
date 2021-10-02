// overloading of insertion opperator '>>'
// replacing show_data by overloading of cout << operator
#include<iostream>
using namespace std;
class complex
{
		int a,b;
		public:
			friend complex operator>>(istream&,complex);
			friend complex operator<<(ostream&,complex);
	
			
			
};

complex operator>>(istream &din,complex c)
{
		cin>>c.a>>c.b;
		return c;
}

complex operator<<(ostream &p,complex c)
{
		cout<<c.a<<","<<c.b<<"\n";
		return c;
}
int main()
{
		cout<<"Enter a complex No.";
		complex c1,c2,c3;
		c2=operator>>(cin,c1);
	// 	cout<<c2.a<<c2.b;   // wrong
	                        // can't acess
        c3=operator<<(cout,c2);
		cout<<"Hey you enterd complex No.\nand i stored in c1 with help of overloading of extraction operator >>\nand i display it for you";
		cout<<" with overloading of insertion operator <<";
}
