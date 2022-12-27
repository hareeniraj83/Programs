//4. remove blank spaces
#include<stdio.h>
#include<string.h>
void main()
{
int i=0,j;
char str1[]="hello world c";
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
printf("%s %s\n",str1,str2);
}
