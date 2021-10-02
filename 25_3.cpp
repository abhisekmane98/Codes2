// negative of number by friend overloading
// find error
#include<iostream>
using namespace std;
class Number
{
		int a;
		public:
			void set_data(int x)
			{
				a=x;
			}
			friend Number operator-(Number);  // declaration of friend function	
			void show_data()
			{
					cout<<N2.a;
			}		
};

Number operator-(Number p)
{
		Number temp;
		temp.a=-p.a;  // negative done now
		return temp;
}
int main()
{
		number N1,N2;
	//	N1=4;    // wrong
	//	N2=5;    // wrong
	//	N1,a=4;  // wrong
	//	N2.a=5;  // wrong
	    N1.set_data(4);
	    N2=-N1;    // -operator friend function call by passing value N1
	//  cout<<N2.a<<N2.b;  // wrong
	    N2.show_data();    
}
