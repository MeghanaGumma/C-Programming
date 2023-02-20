#include<stdio.h>
main()
{
	 int n, i, num, l;
	 printf("Enter number of elements: ");
	 scanf("%d",&n);
	 printf("Enter number 1: ");
	 scanf("%d", &num);
	 l = num;
	 i=2;
	 while(i<=n)
	 {
	  printf("Enter number %d: ",i);
	  scanf("%d", &num);
	  if(num < l)
	  {
	   l = num;
	  }
	  i++;
	 }
	 printf("Smallest = %d", l);
}
