#include<stdio.h>

void main()
{        
	int i, j, a, n, number[30],count=0;
        printf("Enter the value of N \n");
	scanf("%d", &n);
        printf("Enter the numbers \n");
        for(i=1;i<=n;i++)
           scanf("%d", &number[i]);
       
        for(i=1;i<=n;i++)
        {
            for (j =i+1;j<=n;j++)
            {
                if (number[i]>number[j]) 
               {
                   a=number[i];
                   number[i]=number[j];
                   number[j]=a;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
        	if(number[i]==i)
        	{
        		count++;
        	}
        }
        
        if(count==n)
        	printf("happy\n");
        else
        	printf("sad\n");

 
}