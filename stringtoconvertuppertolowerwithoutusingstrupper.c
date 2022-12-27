//program to convert upper case to lower case of string
#include<stdio.h>
void main()
{
char str[100];
printf("enter the string\n");
gets(str);
int i=0;
while(str[i]!='\0')
{
if(str[i]>='A'&&str[i]<='Z')
str[i]=str[i]+32;
i++;
}
printf("string of lower case is %s\n",str);
}

