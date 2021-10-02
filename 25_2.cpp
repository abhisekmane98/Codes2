// addition by friend overloading
#include<iostream>
using namespace std;
class integer 
{
		int a,b;
		public:
			void set_data(int x,int y)
			{
					a=x;
					b=y;
			}
			friend integer operator+(integer,integer);     // declaration of friend function
			void show_data()
			{
				cout<<a<<","<<b;
			}
			
};

integer operator+(integer x,integer y)
{
		integer temp;
		temp.a=x.a+y.a;
		temp.b=x.b+y.b;
		return temp;
}

int main()
{
		integer i1,i2,i3;
	//	i1.a=3;   // wrong
	//	i1.b=4;   // wrong
	    i1.set_data(3,4);
	    i2.set_data(4,5);
	    i3=i1+i2;  // +operator function calls by passing arguments i1 and i2
	//  cout<<i3.a<<i3.b;   // wrong
	     i3.show_data();
}
