# include<stdio.h>
#include<stdlib.h>
# include "stud.h"
# include "sorting.h"
# include<string.h>
int num=0;
int readfile(struct student* student_rec,const char* filename)

{
	
	FILE* fp;
	int i=0;
	fp =fopen(filename ,"r");
	if (!fp)
	{
		printf("can't open file\n");
		return 0;
	}
	
	while(fscanf(fp, "%d\t%s\t%f\n",&student_rec[i].roll,student_rec[i].name, &student_rec[i].cpi)!=EOF)
	{
		if(student_rec[i].roll==0 || (strcmp(student_rec[i].name,"-")==0) ||student_rec[i].cpi== 0.0f)
		 continue;
		i++;
	}
	
	fclose(fp);
	num=i;
	return i;
	
}

void display_list(struct student* student_rec, int no_of_record)
{

	int j;
	printf("The number of valid records is %d\n",no_of_record);
	printf("valid records are as follows :\n");
	for(j=0;j<no_of_record;j++)
	printf("%d\t%s\t%.2f\n",student_rec[j].roll,student_rec[j].name,student_rec[j].cpi);
}

void display_record_name(struct student* student_rec, char* name)
{
	
	int i,flag=0;
	for(i=0;i<num;i++)
	{
		if( strcmp(student_rec[i].name, name)==0)
		{
			printf("records with the name %s is \n",name); 
			printf("%d\t%s\t%.2f\n",student_rec[i].roll,student_rec[i].name,student_rec[i].cpi);
			flag++;
			
		}
	
	}
	if(flag==0)
	printf("No such record exist\n");
}

void display_record_roll(struct student* student_rec, int roll)
{
	int i,flag=0;
	for(i=0;i<num;i++)
	{
		if(student_rec[i].roll==roll)
		{
			printf("records with the roll %d is \n",roll);
			printf("%d\t%s\t%.2f\n",student_rec[i].roll,student_rec[i].name,student_rec[i].cpi);
			flag++;
			
		}
	
	}
	if(flag==0)
	printf("No such record exist\n");
}

