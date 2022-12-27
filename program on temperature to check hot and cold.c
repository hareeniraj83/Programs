//3. program to check the temperatue is hot or cold
#include<stdio.h>
int main()
{
temperature();
}
int temperature()
{
int n;
printf("enter the temperature\n");
scanf("%d",&n);
if(temperature<20)
printf("the temperature is COLD\n");
else
printf("the temperature is HOT\n");
}
