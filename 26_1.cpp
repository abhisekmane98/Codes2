// last program we have to form another set_data(),think ??????
// check error
#include<iostream>
using namespace std;
class A
{
		int a;
		public:
			void set_data(int x)
			{
				  a=x;
			}
			A add(A,B);
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
			A add(A,B);
			
			
};

A add(A,B)
{
		A=temp;            // you can use clss 'B' also
		temp=A1.a+B1.b;
		return temp;
}
int main()
{
		A=A1;     // 'A1' is object of class 'A'
		B=B2;     // 'B2' is object of class 'B'
	//	A1.a=3;   // wrong
	//	B1,b=4;   // wrong
	    A1.set_data(3);
	    B1.set_data(4);
	    A=A3;
	    A3=add(A1,B1);
	//    cout<<A3.a; // wrong
	    A3.show_data();
}
