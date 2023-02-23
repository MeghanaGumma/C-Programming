#include<stdio.h>
main()
{
	int i,n1,n2,count=0;
	printf("Enter the range n1 and n2: ");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(i%2!=0)
		{	
			count++;
			if(count==3)
			{
				continue;
			}
			printf("%d\t",i);
		}
	}
}
