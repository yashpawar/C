#include<stdio.h>
int main()
{
	int i,j;
	int T,N;
	int count,fast;
	scanf("%d",&T);
	for (j=0;j<T;j++)
	{
		scanf("%d",&N);
		int speed[N];
		for (i=0;i<N;i++) scanf("%d",&speed[i]);
		count=0;
		fast=0;
		for (i=0;i<N;i++)
		{
			if(speed[i] <= speed[fast]) 
			{
				count++;
				fast=i;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
