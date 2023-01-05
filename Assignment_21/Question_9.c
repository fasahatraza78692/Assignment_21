#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[20];
	char course[20];
	char add[20];
};
void Data_Entry(struct student *s,int n)
{
	int i;
	for(i=0;i<n;i++)
	 {
	 	printf("Enter the data of %d student\n",i+1);
	 	fflush(stdin);
	 	printf("Name:\n");
	 	gets(s[i].name);
	 	printf("Roll No:\n");
	 	scanf("%d",&s[i].roll_no);
	 	fflush(stdin);
	 	printf("Course:\n");
	 	fflush(stdin);
	 	gets(s[i].course);
	 	printf("Address:\n");
	 	gets(s[i].add);
	 }
}
void Display(struct student *s,int n)
{
	int i;
	for(i=0;i<n;i++)
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
	int n;
	printf("How many student's info you want to store\n");
	scanf("%d",&n);
	struct student std[n];
	 Data_Entry(std,n);
	 Display(std,n);
  return 0;
}
