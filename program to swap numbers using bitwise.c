// 4. program to swap two numbers using bitwise operators
#include<stdio.h>
void main()
{
int a=5,b=2;
printf("the numbers before swapping are %d and %d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("the numbers after swapping are %d and %d\n",a,b);
}
