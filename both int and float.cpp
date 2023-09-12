/* to represent he in both floating and int*/
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter a and b value");
	scanf("%f%f",&a,&b);
	c=a*b;
	int d;
	d=a*b;
	printf("int and float is: %d %f",d,c);
	return 0;
}
