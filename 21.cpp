// check errors
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
			static int set_roi(float r)
			{
				roi=r;
				return roi;
			}
			void display(float x)
			{
				cout<<"x";	
			}
};
float account :: roi=3.5f;
int main()
{
	int b;
	cout<<"Please Enter your balance";
	cin>>b;
	set_balance(b);
	float roi;
	roi=static set_roi(4.5f);
	display(roi)
}
