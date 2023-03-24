#include<stdio.h>
#include<string.h>
main()
{
	struct date
	{
		int dd;
		int mm;
		int yyyy;
	};
	struct student
	{
		int rollno;
		char name[20];
		struct date dob;
		float marks;
	};
	struct student s1;
	s1.rollno=101;
	strcpy(s1.name,"Meg");
	s1.dob.dd=06;
	s1.dob.mm=11;
	s1.dob.yyyy=2004;
	s1.marks=93.33;
	printf("ROLLNO  NAME    DOB        MARKS\n");
	printf(" %d    %s   %d-%d-%d    %f",s1.rollno,s1.name,s1.dob.dd,s1.dob.mm,s1.dob.yyyy,s1.marks);
		
}
