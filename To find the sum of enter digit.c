#include<stdio.h>
int main()
{
    int no,b,sum=0;
    printf("Enter any number\n");
    scanf("%d",&no);
    while(no!=0)
    {
        b=no%10;
        sum=sum+b;
        no=no/10;
    }
    printf("Total sum of digits=%d",sum);
}
