#include <stdio.h>
int main()
{	
	int a,b,i,j,k,l,temp,mindiff;
	scanf("%d",&a);

	for(i=0;i<a;i++)
	{	
		scanf("%d",&b);
		int s[b];
		for(j=0;j<b;j++)
		{
		scanf("%d",&s[j]);	
		}
		mindiff=s[1]-s[0];
		if (mindiff<0)
			mindiff=0-mindiff;
		for(k=0;k<b;k++)
		{
			for(l=k+1;l<b;l++)
			{
				temp=s[l]-s[k];
				if (temp<0)
					temp=0-temp;
				if(temp<mindiff)
					mindiff=temp;
			}
		}
		printf("%d\n",mindiff);
	}
	return 0;
}