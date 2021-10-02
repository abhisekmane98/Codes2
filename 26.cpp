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
			
			
};

class B
{
		int b;
		public:
			
			
};
int main()
{
		A=A1;     // 'A1' is object of class 'A'
		B=B2;     // 'B2' is object of class 'B'
	//	A1.a=3;   // wrong
	//	B1,b=4;   // wrong
	    A1.set_data(3);
	    B1.set_data(4);
}
