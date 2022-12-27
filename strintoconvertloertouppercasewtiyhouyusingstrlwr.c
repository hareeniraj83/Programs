//program to convert lower case to upper case of string
#include<stdio.h>
void main()
{
char str[100];
printf("enter the string\n");
gets(str);
int i=0;
while(str[i]!='\0')
{
if(str[i]>='a'&&str[i]<='z')
str[i]=str[i]-32;
i++;
}
printf("string of upper case is %s\n",str);
}
