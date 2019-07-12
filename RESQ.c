#include<stdio.h>
int main()
{
	int t,n;
	int div,ans;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&n);
	div=(int)sqrt(n);
	flag=0;
	while(1)
	{
		
		if(n%div==0)
		{
			ans=div-n/div
			break;
		}
		div++;
		
		
	}
	if(ans<0) ans=ans*(-1);
	printf("%d\n",ans);
	}
	return 0;
}
