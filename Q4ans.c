#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100];
  	int i, l, flag=0;
  	gets(str);
  	l = strlen(str);
    for(i=0;i<l;i++)
	{
		if(str[i]!=str[l-i-1])
		{
			flag=1;
			break;	
		} 
	}
	if(flag==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}