#include<stdio.h>
int main()
{
    for(int i=0;i<=10;i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("\n%d",i);
    }
    printf("\nEND");
    return 0;
}
