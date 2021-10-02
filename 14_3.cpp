// find error
#include<iostream>
using namespace std;
class complex
{
	int a,b;
	void set_data(int x,int y)     // member function can acess any member in same class/structure directly
	{
		a=x;
		b=y;
	}
	void display_data()
	{
		cout<<a<<b;
	}
	
};
int main()
{
		complex c1;
		c1.set_data(3,4);   // calling function by passing value
}

