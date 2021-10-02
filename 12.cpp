#include<iostream>
using namespace std;
struct book
{
		int id;
		char name[20];
		float price;
		
};
int main()
{
		book b1,b2;
		cout<<"Enter id,name and price of book"<<endl;
		cin>>b1.id>>b1.name>>b1.price;
		cout<<b1.id<<endl<<b1.name<<endl<<b1.price;
		
}
