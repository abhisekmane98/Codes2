// remarkable error
#include<iostream>
using namespace std;
int main()
{
		int &p,a=3;
		&p=a;
		cout<<p;
}
