#include<stdio.h>
main()
{
	int i,n,min,max,dif;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	dif=max-min;
	printf("Difference between max and min is %d",dif);
}
