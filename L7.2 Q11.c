#include<stdio.h>

main()
{
	int i,j,k;
	
	for (i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i-1;j++)
		{
			printf("*",j);
		}
		for(j=i;j>=1;j--)
		{
			printf("*",j);
		}
		printf("\n");
	}
	
}