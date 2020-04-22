# include "stud.h"
# include "sorting.h"
# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	struct student student_rec[20],student_rec1[20];
	int n,ch,r;
	char nam[20];
	n=readfile(student_rec,"student.txt");
	while(1)
	{
	printf("Enter your choice\n");
	printf("1.To display  number of valid record and unsorted records list\n");
	printf("2.To search   a valid record with the name provided\n");
	printf("3.To search   a valid record with the roll provided\n");
	printf("4.To display  number of valid record and sorted records list wrt rollno\n");
	printf("5.To display  number of valid record and sorted records list wrt name\n");
	printf("6.To display  number of valid record and sorted records list wrt cpi\n");
	printf("7.To exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		display_list(student_rec,n);
		break;
	case 2:
		printf("enter the name you want to search\n");
		scanf("%s",nam);
		display_record_name(student_rec,nam);
		break;
	case 3:
		printf("enter the rollno you want to search\n");
		scanf("%d",&r);
		display_record_roll(student_rec,r);
		break;
	case 4:
		Quick_sort_roll(student_rec,student_rec1,n);
		break;
	case 5:
		Quick_sort_name(student_rec,student_rec1,n);
		break;
	case 6:
		Quick_sort_cpi(student_rec,student_rec1,n);
		break;
	case 7:
		printf("THANK YOU \n");
		exit( 0);
	}
	}
	return 0;
}
	
