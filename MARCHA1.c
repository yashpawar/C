#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int n,m,tmp1,tmp2,tmp3;
	for (tmp3=0;tmp3<t;tmp3++)
	{
	scanf("%d %d",&n,&m);
	int note[n];
	
	for (tmp1=0;tmp1<n;tmp1++)
	{
		scanf("%d",&note[tmp1]);
	}
	int sum,flag=0;
	for(tmp1=1;tmp1<power(n);tmp1++)
	{
		sum=0;
		for(tmp2=0;tmp2<n;tmp2++)
		{
			if (tmp1 & (1<<tmp2))
			{
				sum+=note[tmp2];
			}
		}
		if(sum==m) 
		{
			flag=1;
			break;
		}
	}
	if(flag==1) printf("Yes\n");
	else		printf("No\n");
	}
	return 0;
}
int power(int num)
{
	int ans=1;
	int temp;
	for(temp=0;temp<num;temp++)
	{
		ans*=2;
	}
	return ans;
}
