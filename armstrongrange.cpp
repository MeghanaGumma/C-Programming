#include<stdio.h>
main()
{
	int temp,r,sum=0,n,i;
	printf("Enter range: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
    {
    	temp=i;
	while(temp!=0)
	{
		r=temp%10;
		sum+=(r*r*r);
		temp=temp/10;
	}
	if(sum==i)
	{
		printf("%d ",i);
	}
	sum=0;
	}
}
