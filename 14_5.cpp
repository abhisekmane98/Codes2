#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		void set_data(int,int);   // declaration
		void display_data()         // inline function
		{
			cout<<a<<","<<b;
		}
	
};
void complex:: set_data(int x,int y) // to make inline we have to use inline keyword
{
		a=x;
		b=y;
}
int main()
{
		complex c1;
		c1.set_data(3,4);  
		c1.display_data();
		return 0;
}

