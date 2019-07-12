#include<stdio.h>
int main()
{
	int T,G;
	int initial,want ,result,coins;
	int l1,l2;
	scanf("%d",&T);
	for (l1 = 1;l1 <= T; l1++)
	{
	scanf("%d",&G);
	for (l2 = 1;l2 <= G; l2++)
	{
		scanf("%d %d %d",&initial,&coins,&want);
		if (coins%2 != 0)
		{
			if (want==initial)
				result=(coins-1)/2;
			else
				result=(coins+1)/2;
		}
		else
		{
			result=coins/2;
		}
		printf("%d\n",result);
	}
	}
	return 0;
}
