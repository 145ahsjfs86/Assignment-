#include<stdio.h>
void main ()
{
int n,p,s,r;
printf("Enter number");
scanf("%d",&n);
p=1,s=0;
while(n%=0)
    {
    r=n%10;
    p=p*r;
    s=s+r;
    n=n/10;
    }
    printf("%d",p,n,s);
    
    }