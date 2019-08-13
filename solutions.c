#include<stdio.h>
int main()
{
    int i,n;
    int a[i],prd=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        prd=prd*a[i];
    }
    printf("%d",prd);
    return 0;
}