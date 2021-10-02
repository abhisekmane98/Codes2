// understand error by compiling the program
#include<iostream>
#include<string.h>
using namespace std;
struct book
{
	private:
		int id;
		char name[20];
		float price;
	public:
		void input()
		{
			if(id<0)
			  id=-id;                    // stopping data corruption
			cin>>id>>name>>price;
			
		}
		void display()
		{
			cout<<id<<name<<price;
		}
};
int main()
{
		book b1;
		cout<<"Enter a book id,name and price";
		b1.id=-5;                                   // can't acess
		strcpy(b1.name,"abhishek_biograpgy_2031");  // can't acess
		b1.input();
		b1.display();
		return 0;
}
