// overloading of insertion opperator '>>'
// after exam we check why program is not runningw
#include<iostream>
using namespace std;
class complex
{
		int a,b;
		public:
			friend complex operator>>(complex&);
			void show_data()
			{
					cout<<a<<","<<b<<endl;
			}
			
			
};

complex operator>>(complex &c)
{
		cin>>c.a>>c.b;
		return c;
}
int main()
{
		cout<<"Enter a complex No.";
		complex c1,c2;
		c2=operator>>(c1);
	// 	cout<<c2.a<<c2.b;   // wrong
	                        // can't acess
         c2.show_data();
		cout<<"Hey you enterd complex No.\nand i stored in c1 with help of overloading of insertion operator >>\nand i display it for you";
		cout<<" with help of making show_data function";
}
