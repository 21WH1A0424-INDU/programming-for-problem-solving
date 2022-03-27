#include<stdio.h>
int fact (int);
int main()
{
	int num,factorial;
	printf("\nenter any num to find its factorial : ");
	scanf("%d",&num);
	factorial=fact(num);
	printf("factorial of %d = %d\n",num,factorial);
	return 0;
}
int fact (int n)
{
	if(n==0){
	return 1;}
	else
	{
		return(n*fact(n-1));
	}
}
