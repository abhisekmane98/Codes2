#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	int a,b;
	public:
		void set_data(int x,int y)
		{
			a=x;
			b=y;
		}
		complex operator+(complex c)  // replace 'add' by 'operator+'
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
		void show_data(complex c)
		{
			cout<<c.a<<","<<c.b;
		}
};
int main()
{
		complex c1,c2,c3;
		c1.set_data(3,4);
		c2.set_data(5,6);
	    c3=c1.operator+(c2);    // replace 'add' by 'operator+'
	    c1.show_data(c3);
	    getch();
		
		
}

