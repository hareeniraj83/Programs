//program to remove blank spaces in string
#include<stdio.h>
void main()
{
char a[50]={"c program to remove spaces"};
for(int i=0;i<50;i++)
{
if(a[i]==' ')
{
continue;
}
printf("%c",a[i]);
}
}
