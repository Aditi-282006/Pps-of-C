#include<stdio.h>
int main()
{
    int num,rem,i,check=0;
    
    printf("ENTER THE NUMBER:\t");
    scanf("%d",&num);
    
    for(i=2;i<num;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            check=1;
            break;
        }
    }
    if(check==0)
    {
        printf("PRIME");
    }
    else
    {
        printf("NOT PRIME");
    }
    return 0;
}
