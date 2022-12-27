// program to remove blank spaces
#include<stdio.h>
void main()
{
int i=0,j;
char str1[]="hello world";
int len=strlen(str1);
char str2[len];
for(int i=0;i<len;i++)
{
if(str1[i]!=' ')
{
str2[j]=str1[i];
j++;
}
}
printf("%s %s",str1,str2);
}
