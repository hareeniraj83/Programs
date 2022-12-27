// 5. program on bit stuffing
#include<stdio.h>
void main()
{
    int a,b,c,d,e,i;
    printf("enter the values\n");
    scanf("%d %d %d %d %d\n",&a,&b,&c,&d,&e);
    if(a==0&&b==0&&c==0&&d==0&&e==0||a==1&&b==1&&c==1&&d==1&&e==1){
    printf("enter the 6th bit\n");
    scanf("%d",&i);
    if(a==b&&c==d&&e!=i)
    {
        printf("bit stuffing is done\n");
    }
    else
    {
        printf("bit stuffing is not opposite bit\n");
}
    }
    else{
printf("bit stuffing does not\n");
    }
}
