#include<stdio.h>
int NaturalNumbers (int);
int main()
{
	int n;
	printf("\nenter any number:");
	scanf("%d",&n);
	printf("\n the natural numbers between 1 to n are:");
	NaturalNumbers (n);
}
int NaturalNumbers (int n)
{
	if(n)
	NaturalNumbers(n-1);
	else
	return 1;
	printf("\n%d\n",n);
}


