#include<stdio.h>
#include<string.h>
main()
{
	struct student
	{
		int rollno;
		char name[20];
		float feepaid;
	};
	struct student s[5]; int i;
	printf("Enter student details:\n");
	for(i=0;i<5;i++)
	{
		printf("Enter rollno: "); scanf("%d",&s[i].rollno);
		printf("Enter name: "); scanf("%s",s[i].name);
		printf("Enter feepaid: "); scanf("%f",&s[i].feepaid);
		printf("\n");
		
	}
	printf("\n\nROLLNO\tNAME\tFEEPAID\n");
	for(i=0;i<5;i++)
	{
		printf("  %d\t",s[i].rollno);
		printf("%s\t",s[i].name);
		printf("%.3f",s[i].feepaid);
		printf("\n");
		
	}
	
	
}
