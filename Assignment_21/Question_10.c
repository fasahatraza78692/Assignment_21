#include<stdio.h>
#include<string.h>
struct Marks
{
	int roll_no;
	char name[20];
	int chem_marks;
	int maths_marks;
	int phy_marks;
};
void Enter_data(struct Marks *m)
{
	int i;
	for(i=0;i<5;i++)
	 {
	 	printf("Enter %d student data\n",i+1);
	 	printf("roll no. ");
	 	scanf("%d",&m[i].roll_no);
	 	fflush(stdin);
	 	printf("name: ");
	 	gets(m[i].name);
	 	printf("chem marks: ");
	 	scanf("%d",&m[i].chem_marks);
	 	printf("maths marks: ");
	 	scanf("%d",&m[i].maths_marks);
	 	printf("phy marks: ");
	 	scanf("%d",&m[i].phy_marks);
	 }
}
void Display(struct Marks *m)
{
	int i;
	float pr;
	for(i=0;i<5;i++)
	{
		printf("Student %d\n",i+1);
		printf("Roll No: %d\n",m[i].roll_no);
		printf("Name: %s\n",m[i].name);
		printf("Chemistry Marks: %d\n",m[i].chem_marks);
		printf("Maths Marks: %d\n",m[i].maths_marks);
		printf("Physics: %d\n",m[i].phy_marks);
		pr=(m[i].chem_marks+m[i].phy_marks+m[i].maths_marks)/3.0;
		printf("Percentage: %.2f%%\n",pr);
	}
}
int main()
{
	struct Marks mks[5];
	Enter_data(mks);
	Display(mks);
	return 0;
}
