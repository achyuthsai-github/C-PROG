/* pattern 3 */
#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("enter the n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
		
		for(s=0;s<n-i;s++)
	{
		printf(" ");
	}
			
	
	
		for(j=0;j<i+1;j++)
		{
		
		printf("* ");
	}
		printf("\n");
	}
	
}

