// 1st try so wrong
// very important error about acess
#include<iostream>
using namespace std;
class complex
{
	int a,b,c,d;
	public:
		void input()
		{
			cout<<"Enter two complex No.";
			cin>>a>>b>>c>>d;
		}
		add()
		{
			int x,y;
			x=a+c;
			y=b+d;
		}
		display()
		{
			cout<<x<<y;
		}
	
};
int main()
{
		complex c1,c2;
		input();
		add();
		display();
		return 0;
}

