#include "stdio.h"

unsigned long  fact(unsigned int n,unsigned int a);

int main()
{

	int i;

	printf("please input any number: \n");
	scanf("%d",&i);
	printf("%d de jiecheng is :%d \n",i,fact(i,1));

return 0;
}


unsigned long  fact(unsigned int n,unsigned int a)
{
	if(n==1 || n==0)
		return a;
	else
		return fact(n-1,n*a);

}
