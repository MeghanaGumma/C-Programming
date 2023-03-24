#include<stdio.h>
struct time1
{
	int hrs1;
	int mins1;
};
struct time2
{
	int hrs2;
	int mins2;
};
void sum(struct time1, struct time2);
main()
{
	struct time1 t1; struct time2 t2;
	printf("Enter hours (1): "); scanf("%d",&t1.hrs1);
	printf("Enter mins (1): "); scanf("%d",&t1.mins1);
	printf("Enter hours (2): "); scanf("%d",&t2.hrs2);
	printf("Enter mins (2): "); scanf("%d",&t2.mins2); 
	sum(t1,t2);
}
void sum(struct time1 t1,struct time2 t2)
{
	struct time3
	{
		int hrs;
		int mins;
	} t3;
	t3.hrs=t1.hrs1+t2.hrs2;
	t3.mins=t1.mins1+t2.mins2;
	if(t3.mins>=60)
	{
		t3.hrs=t3.hrs+(t3.mins/60);
		t3.mins=t3.mins%60;
	}
	printf("Total hours: %d\nTotal nimutes: %d",t3.hrs,t3.mins);
}

