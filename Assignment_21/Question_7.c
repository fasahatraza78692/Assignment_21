#include<stdio.h>
struct time
{
	int hour;
	int min;
	int sec;
};
int main()
{
	struct time t1,t2,temp,diff;
	printf("Start time:\n");
	scanf("%d%d%d",&t1.hour,&t1.min,&t1.sec);
	printf("Stop time:\n");
	scanf("%d%d%d",&t2.hour,&t2.min,&t2.sec);
	printf("1st time period = %d:%d:%d\n",t1.hour,t1.min,t1.sec);
	printf("2nd time period = %d:%d:%d\n",t2.hour,t2.min,t2.sec);
    if(t1.hour<t2.hour)
     {
     	temp=t1;
     	t1=t2;
     	t2=temp;
	 }
	while(t1.sec<t2.sec)
	 {
	 	t1.min--;
	 	t1.sec=t1.sec+60;
	 }
	diff.sec=t1.sec-t2.sec;
    while(t1.min<t2.min)
     {
     	t1.hour--;
     	t1.min=t1.min+60;
	 }
	diff.min=t1.min-t2.min;
	diff.hour=t1.hour-t2.hour;
    printf("Difference = %d:%d:%d\n",diff.hour,diff.min,diff.sec);
  return 0;
}
