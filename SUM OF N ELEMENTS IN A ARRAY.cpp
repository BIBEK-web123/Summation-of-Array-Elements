#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=0;
	int a[50];
	printf("\n\t\t--**SUM OF N ELEMENTS IN A ARRAY**--\n");
	printf("\n\tEnter the number of elements:");
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",& a[i]);
	}
	printf("\nArray elements are:");
	for(i=0;i<=n-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\b ");
	for(i=0;i<=n-1;i++)
	{
		sum=sum+a[i];
	}
	printf("\nThe sum of all the elements present in the array is=%d",sum);
}
