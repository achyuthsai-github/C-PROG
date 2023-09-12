/* to calculate the percentage of student*/
#include<stdio.h>
int main()
{
	float m,p,c,b,e,t,f;
	printf("enter the marks of five subjects");
	scanf("%f%f%f%f%f%f",&m,&p,&c,&b,&e,&f);
	t=(m+p+c+b+e)/f*100;
	printf("the total percentage of students%f%%",t);
	return 0;
}
