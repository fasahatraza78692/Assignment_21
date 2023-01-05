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
void srt_slry(struct Employee *p,int n)
{
	int i,j;
	struct Employee temp;
	for(i=0;i<n-1;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	 {
	 	 	if(p[i].salary>p[j].salary)
	 	 	 {
	 	 	 	temp=p[i];
	 	 	 	p[i]=p[j];
	 	 	 	p[j]=temp;
			 }
		 }
	 }
}
int main()
{
	struct Employee e[10];
	int i;
	for(i=0;i<10;i++)
	  {
	  	printf("Enter the %d Employee data\n",i+1);
	  	Emply_Data(&e[i]);
	  }
	srt_slry(e,10);
	printf("Sorted Employee according to Salary")
	for(i=0;i<10;i++)
	  	Display(e[i]);
}
