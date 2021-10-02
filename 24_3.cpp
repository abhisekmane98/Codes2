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
			integer operator+(integer i2)
			{
					integer temp;
					temp.a=a+i2.a;
					temp.b=b+i2.b;
					return temp;
			}
			void show_data()
			{
				cout<<a<<","<<b;
			}
		
};
int main()
{
		integer i1,i2,i3;
		// i1.a=3;	 // wrong 
		i1.set_data(3,4);
		i2.set_data(5,6);
		i3=i1+i2;                // i1 called +operator function by passing integer
	//	cout<<i3.a<<i3.b;       // wrong
		i3.show_data();
}
