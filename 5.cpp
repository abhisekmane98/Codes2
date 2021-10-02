#include<iostream>
using namespace std;
int main() 
{
	cout<<"Enter a year";
	int x;
	cin>>x;
	if(x%4==0)
      if(x%100==0)
         if(x%400==0)
           cout<<"leap year";
         else
           cout<<"simple year";
      else
         cout<<"leap year";
         
    
}
