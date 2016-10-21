#include "stdio.h"

unsigned long fact(unsigned int n);

int main()
{

	int i;

	printf("please input any number: \n");
	scanf("%d",&i);
	printf("%d de jiecheng is :%d \n",i,fact(i));

return 0;
}

unsigned long  fact(unsigned int n)
{
	if(n==1 || n==0)
		return 1;
	else
		return n*fact(n-1);

}
