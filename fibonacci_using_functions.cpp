#include<stdio.h>
void FibonacciSeries (int);
int main()
{
	int term;
	printf("\n enter any term:");
	scanf("%d",&term);
	printf("the fibonaci series is : \n");
	FibonacciSeries (term);
	return 0;
}
void FibonacciSeries (int n)
{
	int a=0,b=1,c,i;
	for(i=0;i<n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}

