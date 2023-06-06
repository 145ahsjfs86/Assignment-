#include<conio.h>

void main ()
{
int a,b,m,s,d,q,r,t;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
s=a+b;
m=a*b;
d=a-b;
q=a/b;
r=a%b;
t=a+b+m+s+d+q+r;
printf("\nThe sum of two numbers:=%d",s);

printf("\nThe deference of two numbers:=%d",d);
printf("\nThe quotient of two numbers;=%d",q);
printf("\nThe reminder of two numbers:=%d",r);
printf("\nThe total of two numbers:=%d",t);
}
