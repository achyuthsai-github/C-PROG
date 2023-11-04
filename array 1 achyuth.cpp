#include<stdio.h>
#include<conio.h>
int main()
{
	int n,arr[100],min,i,max;
	
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element %d",i);
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	for(i=1;i<n;i++){
	
	
		if(arr[i]<min){
		
		min=arr[i];
	}
	if(arr[i]>max)
	{
	max=arr[i];
	}
	printf("max%d",max); printf("\n");
	printf("min%d",min);}
	
	}
