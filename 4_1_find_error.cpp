//prime or consonant
#include<iostream>
using namespace std;
int main()
{
		cout<<"Enter a No.";
		int x,a,b;
		cin>>x;
		for(a=2;a<=x-1;a++)
		{
			b=x%a;
			if(b==0)
	    		  cout<<"Consonant";
		    	  break;			  
		}
		if(b!=0)
		  cout<<"prime";
}
