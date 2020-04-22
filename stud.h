struct student

{
	int roll;
	char name[20];
	float cpi;
};

int readfile(struct student *student_rec,const char* filename);
void display_list(struct student *student_rec, int no_of_record);
void display_record_name(struct student *student_rec, char* name);
void display_record_roll(struct student *student_rec, int roll);
