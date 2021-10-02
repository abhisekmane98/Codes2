// i can't do it
// i did it in 12_7
#include<iostream>
using namespace std;
void input(int,char,float);
struct book     // global data type formation
{
		int id;
		char name[20];
		float price;
		
};
int main()
{
		book b1,b2;
		cout<<"Enter id,name and price of book"<<endl;
        input(b1.id,b1.name,b1.price);
		
}
input(int p,char q,float r)
{
		cin>>b1.id>>b1.name>>b1.price;
		cout<<b1.id<<endl<<b1.name<<endl<<b1.price;
}
