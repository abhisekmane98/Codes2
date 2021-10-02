// find error
#include<iostream>
using namespace std;

struct book
{
		int id;
		char name[20];
		float price;
		
};
book input(book);
int main()
{
		book b1,b2;
		b1=input(b1);
		cout<<b1.id<<endl<<b1.name<<endl<<b1.price;
}
book input(b)
{
		cout<<"Enter id,name and price of book"<<endl;
		cin>>b.id>>b.name>>b.price;
		return b;
}
