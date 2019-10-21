#include<stdio.h>
void main()
{
	int n,i,j,a[100];
	scanf("%d",&n);
	   
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	j=1;
	while(i<n-1)
	 {
	 	if(a[i]<a[j])
	        {
	            a[i]=0;
	            i++;
	            j++;
	        }
	        else if(a[i]==a[j])
	        {
	            j++;
	        }
	        else
	        {
	            i++;
	            j++;
	        }
	}
	int s=0;
	for(i=0;i<n;i++)
	    s=s+a[i];
	printf("%d",s);
}