#include<stdio.h>
main()

{
	int i,j,s;
	
	for (i=5;i>=1;i--)
	{
		for(s=5;s>i;s--)
		{
			printf(" ");
		}
		if(j%2==1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		printf("\n");
	}
}