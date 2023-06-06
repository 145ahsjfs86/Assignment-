#include<stdio.h>
void main ()
{
int n1,n2,temp;
printf("Enter n1:");
scanf("%d",&n1);
printf("Enter n2:");
scanf("%d",&n2);
temp=n1;
n1=n2;
n2=temp;
printf("%d,%d",n1,n2);
}