#include<stdio.h>
int main()
{
	int T;
	int i,k,l;
	int count,ignore;
	scanf("%d",&T);
	char s[100];
	char j[100];
	for(l=0;l<T;l++)
	{
	scanf("%s",j);
	scanf("%s",s);
	count=0;
	i=0;
	while(j[i]!='\0')
	{
		ignore=0;
		for(k=0;k<i;k++)
		{
			if (j[k]==j[i])
				ignore=1;
		}
		if (!ignore)
		{
			k=0;
			while(s[k]!='\0')
			{
				if(s[k]==j[i])
				{
					count++;
				}
				
				k++;
			}
		}
		i++;
	}
	printf("%d\n",count);
	}
	
	return 0;
}
