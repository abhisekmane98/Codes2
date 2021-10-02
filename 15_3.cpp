// 1st try so wrong
#include<iostream>
using namespace std;
class complex
{
	int a,b,c,d;
	public:
		void input()
		{
			cout<<"Enter complex No.";
			cin>>a>>b;
		}
		void add(int p,int r,int q,int s)
		{
			int x,y;
			x=p+r;
			y=q+s;
			cout<<x<<y;
		}
		/*void display()
		{
			cout<<x<<y;
		}*/
	
};
int main()
{
		complex c1,c2;
		c1.input();
		c2.input();
		c1.add(c1.a,c2.a,c1.b,c2.b);
		//c1.display();
		return 0;
}
