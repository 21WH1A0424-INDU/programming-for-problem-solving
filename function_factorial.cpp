#include<stdio.h>
int fact (int);
int main()
{
	int num,factorial;
	printf("enter any number to print its factorial : ");
	scanf("%d",&num);
	factorial=fact(num);
	printf("factoril of %d=%d\n",num,factorial);
}
int fact (int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
	   fact=fact*i;	
	}
	return fact;
	
}
