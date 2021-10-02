// last program we have to form another set_data(),think ??????
// check  again new  error
#include<iostream>
using namespace std;
class B;
class A
{
		int a;
		public:
			void set_data(int x)
			{
				  a=x;
			}
			friend A operator+(A,B);        // check changes   
			void show_data()
			{
				cout<<a;
			}
			
			
};

class B
{
		int b;
		public:
			void set_data(int y)
			{
				b=y;
			}
			friend A operator+(A,B);       // check changes
			
			
};

A operator+(A A5,B B5)                       // check changes
{
		A temp;            // you can use clss 'B' also
		                   
		temp.a=A5.a+B5.b;    
		return temp;
}
int main()
{
		A A1;     // 'A1' is object of class 'A'
		B B1;     // 'B2' is object of class 'B'
	//	A1.a=3;   // wrong
	//	B1,b=4;   // wrong
	    A1.set_data(3);
	    B1.set_data(4);
	    A A3;
	    A3=A1+B1;  // operator+ function calls by passing arguments A1,B1
	//    cout<<A3.a; // wrong
	    A3.show_data();
}
