#include<stdio.h>
int main()
{
	int n,a[10],out,in,temp;
	printf("enter the number");
	scanf("%d",&n);
	for(out=0;out<n;++out)
	scanf("%d",&a[out]);
	for(out=0;out<n;++out)
	{
		for(in=out+1;in<n;++in)
		{
			if(a[out]>a[in])
			{
				temp=a[out];
				a[out]=a[in];
				a[in]=temp;
			}
		}
	}
	for(out=0;out<n;++out)
	printf("%d ",a[out]);
}




























	

