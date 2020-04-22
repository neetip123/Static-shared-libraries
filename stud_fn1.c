# include<stdio.h>
# include<stdlib.h>
# include "stud.h"
# include "sorting.h"
# include<string.h>
//Sorting with respect to rollno
int compfr(const void* a ,const void* b)
{
	return (*(int*)a - *(int*)b);
}

void Quick_sort_roll(struct student* student_rec, struct student* student_rec1, int no_of_record)
{
	int arr[no_of_record],i,j;
	for(i=0;i<no_of_record;i++)
	{
	  arr[i]=student_rec[i].roll;
	}
	qsort(arr,no_of_record,sizeof(int),compfr);
	for(i=0;i<no_of_record;i++)
	{   
		for(j=0;j<no_of_record;j++)
		{
			if(arr[i]==student_rec[j].roll)
		       {
			  student_rec1[i].roll=student_rec[j].roll;
			 strcpy(student_rec1[i].name,student_rec[j].name);
			  student_rec1[i].cpi=student_rec[j].cpi;
			  
			
			}
		}
	}
	/*for(i=0;i<no_of_record;i++)
	 printf("%d\n",arr[i]);*/
	printf("valid sorted records are as follows :\n");
	for(i=0;i<no_of_record;i++)
	 printf("%d\t%s\t%.2f\n",student_rec1[i].roll,student_rec1[i].name,student_rec1[i].cpi);
	
}
//Sorting with respect to name
int compfn(const void* a ,const void* b)
{
	const char **ia = (const char **)a;
	const char **ib = (const char **)b;
	return strcmp(*ia,*ib);
	
}

void Quick_sort_name(struct student* student_rec, struct student* student_rec1, int no_of_record)
{
	char *arr[no_of_record];
	int i,j;
	for(i=0;i<no_of_record;i++)
	{
	  arr[i]=malloc(20*sizeof(char));
	}
	for(i=0;i<no_of_record;i++)
	{
	  strcpy(arr[i],student_rec[i].name);
	}
	qsort(arr,no_of_record,sizeof(char*),compfn);
	for(i=0;i<no_of_record;i++)
	{   
		for(j=0;j<no_of_record;j++)
		{
			if(strcmp(arr[i],student_rec[j].name)==0)
		       {
			  student_rec1[i].roll=student_rec[j].roll;
			 strcpy(student_rec1[i].name,student_rec[j].name);
			  student_rec1[i].cpi=student_rec[j].cpi;
			  
			
			}
		}
	}
	/*for(i=0;i<no_of_record;i++)
	 printf("%s\n",arr[i]);*/
	printf("valid sorted records are as follows :\n");
	for(i=0;i<no_of_record;i++)
	 printf("%d\t%s\t%.2f\n",student_rec1[i].roll,student_rec1[i].name,student_rec1[i].cpi);
	for(i=0;i<no_of_record;i++)
	{
	  free(arr[i]);
	   arr[i] =NULL;
	  
	}
	
}

//Sorting with respect to cpi
int compff(const void* a ,const void* b)
{
	float fa =*(const float*)a;
	float fb =*(const float*)b;
	return ((fa> fb)-(fa <fb));
}

void Quick_sort_cpi(struct student* student_rec, struct student* student_rec1, int no_of_record)
{
	float arr[no_of_record];
	int i,j;
	for(i=0;i<no_of_record;i++)
	{
	  arr[i]=student_rec[i].cpi;
	}
	qsort(arr,no_of_record,sizeof(float),compff);
	for(i=0;i<no_of_record;i++)
	{   
		for(j=0;j<no_of_record;j++)
		{
			if(arr[i]==student_rec[j].cpi)
		       {
			  student_rec1[i].roll=student_rec[j].roll;
			 strcpy(student_rec1[i].name,student_rec[j].name);
			  student_rec1[i].cpi=student_rec[j].cpi;
			  
			
			}
		}
	}
	/*for(i=0;i<no_of_record;i++)
	 printf("%.2f\n",arr[i]);*/
	printf("valid sorted records are as follows :\n");
	for(i=0;i<no_of_record;i++)
	 printf("%d\t%s\t%.2f\n",student_rec1[i].roll,student_rec1[i].name,student_rec1[i].cpi);
	
}

