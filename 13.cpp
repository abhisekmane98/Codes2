#include<iostream>
using namespace std;
struct book  // global declaration of book datatype 
{
		int id;
		char name[20];
		float price;
		void input()
		{
			cin>>id>>name>>price;
		} 
		void display()
		{
			cout<<id<<"\n"<<name<<endl<<price;
		}
};
int main()
{
		cout<<"Enter id,name and price of book\n";
		book b1;
		b1.input();         //   __.___ why dot operator, input function defined in book data type and b1 is object of book data type
		b1.display();       // b1 is caller object
		return 0;
}
