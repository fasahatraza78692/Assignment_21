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
	printf("id: %d\n",e1.id);
	printf("Name: %s\n",e1.name);
	printf("Salary: %d\n",e1.salary);
}
void Hieghest_Salary(struct Employee *p)
{
	int i,temp;
	temp=p[0].salary;
	for(i=1;i<10;i++)
	  {
	  	if(temp<p[i].salary)
	  	 temp=p[i].salary;
      }
    for(i=0;i<10;i++)
     {
     	if(temp==p[i].salary)
     	  {
     	  	printf("%s is the Hieghest Salary Employee\n",p[i].name);
     	  	break;
		  }
	 }
}
int main()
{
	struct Employee e[10];
	int i,temp;
	for(i=0;i<10;i++)
	  {
	  	printf("Enter the %d Employee data\n",i+1);
	  	Emply_Data(&e[i]);
	  }
	Hieghest_Salary(e);
}
