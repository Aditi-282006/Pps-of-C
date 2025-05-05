#include<stdio.h>
int main()
{
    int length, breadth,area, perimeter;
    
    printf("Enter the length of a rectangle:");
    scanf("%d",&length);
    
    printf("Enter the breadth of a rectangle:");
    scanf("%d",&breadth);
    
    area=length*breadth;
    printf("\nArea of a rectangle is %d\t",area);
    
    perimeter=2*(length+breadth);
    printf("\nperimeter of a rectangle is %d\t", perimeter);
    
    return  0;
}
