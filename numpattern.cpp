#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	for(i=4;i>0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j);		
		}
		printf("\n");
	}
	
}
