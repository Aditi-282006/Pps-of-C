#include<stdio.h>
int main()
{
    int i;
    for(int i=0;i<=10;i++)
    {
        if(i==3)
        {
            break;
        }
        printf("\n%d",i);
    }
    printf("\nEND");
    return 0;
}
