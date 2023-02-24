#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1,j=n;i<=n,j>0;i++,j--)
	{
		printf("%d  %d\n",i,j);
	}
}
