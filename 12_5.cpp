// wrong way
#include<iostream>
using namespace std;

struct book
{
		int id;
		char name[20];
		float price;
		
};
book input(void);
int main()
{
		book b1,b2;
		b1=input();
		cout<<b1;                                        // it can't print book type variable
}
book input()
{
		cout<<"Enter id,name and price of book"<<endl;
		cin>>b.id>>b.name>>b.price;                       // new function can't acess older variables
		return b;
}
