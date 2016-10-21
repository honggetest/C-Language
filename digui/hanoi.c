#include <stdio.h>

void hanoi(int n,char a,char b,char c);
void move(int n,char a,char b);

int main()
{
	int n;
	printf("please input any number : \n");	
	scanf("%d",&n);
	printf("output : \n");
	hanoi(n,'A','B','C');
return 0;
}

void hanoi(int n,char a,char b,char c)
{
	if(n == 1)
		move(n,a,b);
	else
	{	hanoi(n-1,a,c,b);
		move(n,a,b);
		hanoi(n-1,c,b,a);
        }
} 
void move(int n,char a,char b)
{
	printf("move : %d from %c to %c ! \n",n,a,b);

}
