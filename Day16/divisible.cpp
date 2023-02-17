#include<stdio.h>
main()
{
	int i,k,n,evesum=0,oddsum=0;
	printf("Enter the value of n and k: ");
	scanf("%d%d",&n,&k);
	printf("Divisible numbers: ");
	for(i=1;i<=n;i++)
	{
		if(i%k==0)
		{
			printf("%d\t",i);
			if(i%2==0)
			{
				evesum+=i;
			}
			else
			{
				oddsum+=i;
			}
			
		}
	}
	printf("\nEven sum = %d\nOdd sum = %d",evesum,oddsum);
}
