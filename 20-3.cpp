// last error is theat,the refrence variable must be initialized at bthe time of declaration by aldready declared variable
 #include<iostream>
using namespace std;
int main()
{
		int a=3;
		int &p=a;
		cout<<p++<<"\n";
		cout<<p;
		
		
}
