//swaping of two numbers with bitwise operaotrs
#include<stdio.h>
#include<math.h>
void main()
{
int a=5,b=9;
printf("before swap %d and %d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after swap %d and %d\n",a,b);
}
