#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[20];
	char course[20];
	char add[20];
};
void Data_Entry(struct student *s)
{
	int i;
	for(i=0;i<10;i++)
	 {
	 	printf("Enter the data of %d student\n",i+1);
	 	printf("Name:");
	 	gets(s[i].name);
	 	printf("Roll No:");
	 	scanf("%d",&s[i].roll_no);
	 	fflush(stdin);
	 	printf("Course:");
	 	gets(s[i].course);
	 	printf("Address:");
	 	gets(s[i].add);
	 }
}
void Display(struct student *s)
{
	int i;
	for(i=0;i<10;i++)
	 {
	 	printf("Student %d\n",i+1);
	 	printf("Name: %s\n",s[i].name);
	    printf("Roll No: %d\n",s[i].roll_no);
	    printf("Course: %s\n",s[i].course);
	    printf("Address: %s\n",s[i].add);
	 }
}
int main()
{
	struct student std[10];
	 Data_Entry(std);
	 Display(std);
  return 0;
}
