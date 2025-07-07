#include<stdio.h>

int main()

{

	int i,j,num,a[10]={28,33,45,56,78,97,39,43,66,87};

	printf("ENTER A NUMBER:");

	scanf("%d",&num);

	

	for(i=0;i<10;i++)

	{

		if(a[i]==num)

		{

			printf("The number is at %d index",i);

		}

	}

		

	return 0;

	

}
