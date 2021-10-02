// check error
#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		complex(int x,int y)
		{
			a=x;
			b=y;
		}
		complex operator-()
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
		}
		void show_data()
		{
			cout<<a<<","<<b;
		}
		
};
int main()
{
	complex c1(2,3),c2;
	c2=-c1;
//	cout<<c2.a<<c2.b;  // wrong
    c2.show_data();
}
