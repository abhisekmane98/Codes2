// again check errors
#include<iostream>
using namespace std;
class account
{
		private:
			int balance;
			static float roi;
		public:
			void set_balance(int b)
			{
				balance=b;
			}
			static void set_roi(float r)
			{
				roi=r;
				cout<<r;
			}
};
float account :: roi=3.5f;
int main()
{
	int b;
	cout<<"Please Enter your balance";
	cin>>b;
	account a1,a2;
	a1.set_balance(b);
	a1.static set_roi(4.5f);
	
}
