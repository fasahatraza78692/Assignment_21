#include<stdio.h>
struct Employee
{
	int id;
	char name[20];
	int salary;
};
void Emply_Data(struct Employee *e1)
{
	printf("Enter employee id\n");
	scanf("%d",&e1->id);
	fflush(stdin);
	printf("Enter employee name\n");
	gets(e1->name);
	printf("Enter employee salary\n");
	scanf("%d",&e1->salary);
}
void Display(struct Employee e1)
{
	printf("Employee Data\n");
	printf("id: %d\n",e1.id);
	printf("Name: %s\n",e1.name);
	printf("Salary: %d\n",e1.salary);
}
int main()
{
	struct Employee e1;
	Emply_Data(&e1);
	Display(e1);
  return 0;
}
