// 1st try so wrong
// understanding error
#include<iostream>
using namespace std;
class complex
{
	int a,b,c,d,x,y;
	public:
		void input()
		{
			cout<<"Enter complex No.";
			cin>>a>>b;
		}
		void add()
		{
			x=c1.a+c2.a;
			y=c1.b+c2.b;
		}
		void display()
		{
			cout<<x<<y;
		}
	
};
int main()
{
		complex c1,c2;
		c1.input();
		c2.input();
		c1.add();
		c1.display();
		return 0;
}
