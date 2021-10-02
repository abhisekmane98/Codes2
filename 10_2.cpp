// calling function in  printf()
#include<iostream>
using namespace std;
int add(int,int);  // global declaration
int main()
{
		int a,b,c;
		printf("Enter two No.");
		scanf("%d%d",&a,&b);
		printf("%d",add(a,b));
		return 0;
}
int add(int x,int y)
{
		return(x+y);
}
