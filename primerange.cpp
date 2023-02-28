#include<stdio.h>
main()
{
	int f=0,i,j,n1,n2,count;
	printf("Enter the range n1, n2: ");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		f=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				f++;
			}
		}
		if(f==2)
		{
			count++;
		}
	}
	printf("Count of prime numbers between %d and %d is %d",n1,n2,count);
}
