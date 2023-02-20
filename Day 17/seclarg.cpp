#include<stdio.h>
main()
{
     int i=0, n, a=0, b=0, num;
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   printf("Enter the Numbers: ");
   while(i<n)
   {
     scanf("%d", &num);
     if (num > a)
     {
       b = a;
       a = num;
     }
     else if (num > b)
       b = num;
    i++;
   }
   printf("Second Highest Number is %d",b);
}

