/*to convert kilometer to meter,centimeter,millimeter*/
#include<stdio.h>
int main()
{
	float k,c,m,f;
	printf("enter in km");
	scanf("%f",&k);
	m=k/1000;
	c=k/100000;
	f=k/1000000;
	printf("meter,centimeter,millimeteris %f %f %f ",m,c,f);
	return 0;
}
