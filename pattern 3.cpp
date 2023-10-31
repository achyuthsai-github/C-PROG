/* pattern 3 */
#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("enter the n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
		
		for(s=0;s<n-i-1;s++)
	{
		printf(" ");
	}
			
	
	
		for(j=0;j<n-s;j++)
		{
		
		printf("*");
	}
		printf("\n");
	}
	
}

