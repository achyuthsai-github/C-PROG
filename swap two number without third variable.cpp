/* to swap two num without third variable*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the num");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
	return 0;
}
