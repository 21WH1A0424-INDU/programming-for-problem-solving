#include<stdio.h>
int odd (int,int);
int main()
{
	int a,n;
	printf("\nenter a,n:");
	scanf("%d%d",&a,&n);
	printf("\nodd numbers between %d to %d are:",a,n);
	odd (a,n);
}
int odd (int a,int n)
{
	if(a%2!=0)
	printf("%d",a);
	else{
		if(a<n)
		printf("%d",a+1);
	}
	if(a==n || a==(n-1))
	return 1;
	else
	return odd (a+2,n);
}
