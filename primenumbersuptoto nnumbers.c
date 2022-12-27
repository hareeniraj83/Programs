//program to check wether prime number or not for n numbers
#include<stdio.h>
void main()
{
int n,i,j,c;
printf("enter the range\n");
scanf("%d\n",n);
printf("prime numbers are
       ");
for(i=1;i<=n;i++)
{
    c=0;
    for(j=0;j<=n;j++)
    {
        if(i%j==0)
            c++;
    }
    if(c==2)
        printf("%d\n",i);
}
}
