#include<stdio.h>
int main()
{
	int i,j,number,rows;
	number=1;
	printf("enter the no of rows needed");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
		
		
			printf("%d",number);
			number++;
		}
		printf("\n");
	}
}
