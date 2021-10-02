// error
#include<iostream>
using namespace std;
book input(void);  // book type function should declare after the declaration of book data type
struct book
{
		int id;
		char name[20];
		float price;
		
};
int main()
{
		book b1,b2;
		b1=input();
		cout<<b1.id<<endl<<b1.name<<endl<<b1.price;
}
book input()
{
	    book b;
		cout<<"Enter id,name and price of book"<<endl;
		cin>>b.id>>b.name>>b.price;
		return b;
}
