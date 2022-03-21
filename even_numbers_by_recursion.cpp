#include<stdio.h>
int even (int,int);
int main()
{
	int a,n;
	printf("\nenter a,n:");//a is a number from where to start and n is final range
	scanf("%d%d",&a,&n);
	printf("\n even numbers from %d to %d are:",a,n);
	even (a,n);
}
int even (int a,int n)
{
	if(a%2==0)
	printf("%d",a);
	else{
		if(a<n)
		printf("%d",a+1);
	}
	if(a==n || a==(n-1))
	return 1;
	else
	return even (a+2,n);
}

