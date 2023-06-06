#include<stdio.h>
void main ()
{
int number;
printf("please enter a five digit number");
scanf("%d",& number);

//Extracting individual digits
int digit1= number/10000;
int digit2=(number/1000)%10;
int digit3=(number/100)%10;
int digit4=(number/10)%10;
int digit5=number %10;

//printing digit separating by three spaces
printf("Separated from one another by three spaces: %d %d %d %d %d\n",digit1,digit2,digit3,digit4,digit5);

//Calculating and printing the sum of the digits 
int sum=digit1+ digit2+ digit3 +digit4+ digit5;
printf("Sum of five digits :%d\n",sum);

}
