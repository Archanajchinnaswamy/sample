#include<stdio.h>
void main()
{
	int a[10],b[10],i,n,found=0;
	clrscr();
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the elements of array A\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the elements of array B\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			found++;
		}
	}
	if(found==n)
	{
		printf("two arrays are equal\n");
	}
	else
	{
		printf("two arrays are different\n");
	}
	getch();
}