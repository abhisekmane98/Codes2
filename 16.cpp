// find error
#include<iostream>
using namespace std;
class complex                 // complex class consumes 4 byte memory in 16 bit 
{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter complex No.";
			cin>>a>>b;
		}
		complex add(c)                 // returning type is complex data typa
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};
int main()
{
		complex c1,c2,c3;
		c1.input();
		c2.input();
		// c3=c1+c2; wrong reason in book
		c3=c1.add(c2);  // function c1 is called by calling object c1 and by passing argument as c2 which is variable of complex data type 
		return 0;
}
