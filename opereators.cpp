#include<stdio.h>
int main()
{
int a,b,result,result2;
printf("\n enter a and b values:");
scanf("%d %d",&a,&b);
printf("addition of a and b:%d\n",a+b);
printf("subtraction of a and b:%d\n",a-b);
printf("multiplication of a and b:%d\n",a*b);
printf("division of a and b:%d\n",a/b);
printf("remainder of a and b:%d\n",a%b);
result = a>0&&b<=10;
printf("logical AND result:%d\n",result);
result2 = a==b||b!=0;
printf("logical OR and NOT result:%d\n",result2);
printf("bitwise AND :%d\n",a&b);
printf("bitwise OR : %d\n",a|b);
printf("bitwise NOT :%d\n",!a);
printf("bitwise complement:%d\n",~a);
printf("bitwise XOR:%d\n",a^b);
printf("bitwise shift right:%d\n",a>>2);
printf("bitwise shift left:%d\n",b<<3);
printf("integer size:%d,floating point size:%d\n",sizeof (int),sizeof(float));
printf("conditional expression:%d\n",(a-b)>50?100:200);
printf("preincrement:%d\n",++a);
printf("postincrement:%d\n",b++);
printf("predecrement:%d\n",--a);
printf("postdecrement:%d\n",b--);
}
