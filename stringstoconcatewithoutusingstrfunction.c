//program to concate the two strings without using string function
#include<stdio.h>
void main()
{
    char str1[20],str2[20];
    int i=0,j=0;
    printf("enter the string1\n");
    gets(str1);
    printf("enter the tsring2\n");
    gets(str2);
    while(str1[i]!='\0')
            i++;
    while(str2[j]!='\0')
    {
     str1[i]=str2[j];
     j++;
     i++;
    }
    str1[i]='\0';
    printf("concated string is %s\n",str1);
}
