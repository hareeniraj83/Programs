//number is prime or not
#include<stdio.h>
void main()
{
int a,b;
printf("enter the value of a\t");
scanf("%d",&a);
for(b=0;b<a;b++)
{
if(a%b==0)
{
break;
}
if(b==0)
{
printf("number is prime %d\n",a);
}
else
{
printf("number is not prime %d\n",a);
break;
}
}
}
