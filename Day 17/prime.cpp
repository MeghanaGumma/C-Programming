#include<stdio.h>
main()
{
	int i=1,n,f=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			f++;
		}
	}
	if(f==2)
	{
		printf("It is prime number");
	}
	else
	{
		printf("It is not prime number");
	}
}
