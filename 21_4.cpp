// check error can't understood see after exam
#include<iostream>
using namespace std;
class account
{
		private:
			int balance;
		public:
			static float roi;
			void set_balance(int b)
			{
				balance=b;
			}
			static void set_roi(float r)
			{
				roi=r;
				cout<<"roi is "<<r<<endl;
			}
};
float account :: roi=3.5f;
int main()
{ 
	account c1;
	account :: roi=4.5f;
	cout<<"new roi is"<<roi;	
}
