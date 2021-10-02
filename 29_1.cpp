#include<iostream>
using namespace std;
class A
{
		private:
			int a;
		protected:
			float b;
		public:
			void set_value(int k)
			{
				a=k;
			}
};

class B :public A
{
		private:
			int c1,c2;
		protected:
			char z;
		public:
			set_data(int x)
			{
				set_value(x);
			}
};

int main()
{
		B obj;
		obj.set_data(5);
		
}
