//program to reverse a number
#include<stdio.h>
void main()
{
int a,c=0;
printf("enter a number\n");
scanf("%d",&a);
while(a!=0)
{
c=c*10+a%10;
a=a/10;
}
printf("reverse number is %d\n",c);
}
