#include<stdio.h>
void fun(c)
{
if(c<=50)
{
printf(" %d\t Brigosha\n",c);
fun(c+1);
}
}
int main()
{
int i=1;
fun(i);
}
