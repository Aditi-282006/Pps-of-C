#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER NUNBER1:\t");
    scanf("%d",&a);
    printf("ENTER NUMBER2:\t");
    scanf("%d",&b);
    printf("\nBEFORE SWAPPING\t");
    printf("\nNUMBER 1 is %d",a);
    printf("\nNUMBER 2 is %d",b);
    c=a;
    a=b;
    b=c;
    printf("\nAFTER SWAPPING\t");
    printf("\nNUMBER 1 is %d",a);
    printf("\nNUMBER 2 is %d",b);
    return 0;
}
