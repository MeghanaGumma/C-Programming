#include<stdio.h>
main()
{
	int n,i=1;
	printf("Enter a range: ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
		i++;
	}
}
