// fix this program after exam
#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		complex()
		{
			cout<<"Hey you made object of class complex\n";
		}
		complex(complex &c)
		{
			cout<<"Hey you are passing copy type,so i made here rather tan implicitly defined by compiler";
		}
		void set_data(int x,int y)
		{
			a=x;
			b=y;
		}
		complex add(complex c)
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
		~complex()
		{
			cout<<"object temp is destroying";
		}
		void show_data(complex c4)
		{
			cout<<c4;
		}
		
};
int main()
{
		complex c1,c2;   // 1st constructor call
		complex c3=c1(c2);       // 2nd constructor calls
		c3=c1.add(c2);   // 2nd function calls
		c3.show_data(temp);  // i can use anything c1/c2 on  place of c3 only job is call class complex
		return 0;
}
