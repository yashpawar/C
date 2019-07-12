#include<stdio.h>
int main()
{
	int t,x,y;
	scanf("%d",&t);
	int i,j,k,c;
	int flag,ans;
	for (i=0;i<t;i++)
	{
		scanf("%d %d",&x,&y);
		c=0;
		for(j=x+y+1;c==0;j++)
		{
			flag=0;
			for(k=2;k<=j/2;k++)
			if (j%k==0) flag=1;
			if (flag==0) c=1;
		}
		j--;
		ans=j-(x+y);
		printf("%d\n",ans);
	}
	return 0;
}
