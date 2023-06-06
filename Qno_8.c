#include<stdio.h>
void main ()
{
int h=0,m=0,s=0;
printf("Enter the number of seconds");
scanf("%d",&s);//3663
//1hr=3600 sec;
h=s/3600;
s=s%3600;//3663%3600=63
m=s/60;
s=s%60;//63%60=3
printf("\nHours:%d",h);
printf("\nMinutes:%d",m);
printf("\nSeconds:%d",s);
}