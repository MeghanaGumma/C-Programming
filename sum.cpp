#include<stdio.h>
main()
{
	int sum=0,n,r;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n>9)
	{
		sum=0;
		while(n!=0)
		{
			r=n%10;
			sum+=r;
			n=n/10;
		}
		n=sum;
	}
	printf("sum = %d",sum);
}
