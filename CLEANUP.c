#include<stdio.h>
int main()
{	
	int t,n,m,i,j,k,l;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&m);
		int comp[m];
		int d1,d2;
		d1=((n-m)%2==0)?((n-m)/2):((n-m)/2+1);
		d2=(n-m)/2;
		int set1[d1],set2[d2];
		for(j=0;j<m;j++)
		{
			scanf("%d",&comp[j]);	
		}
		int a=0,b=0;
		for(k=1;k<=n;k++)
		{
			int flag=0;
			for(l=0;l<m;l++)
			{	
				if(k==comp[l])
				{
					flag=1;
				}
			}
			if(flag == 0)
				{
					if((a+b)%2==0)
					{
						set1[a]=k;
						a++;
					}
					else
					{
						set2[b]=k;
						b++;
					}
				}
		}
		for(j=0;j<d1;j++)
		{
			printf("%d ",set1[j]);	
		}
		printf("\n");
		for(j=0;j<d2;j++)
		{
			printf("%d ",set2[j]);	
		}
	}
}
