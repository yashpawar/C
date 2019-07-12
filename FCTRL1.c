#include<stdio.h>
int main()
{
	int T;
	int num,count;
	int i,j;
	scanf("%d",&T);
	for (j=1;j<=T;j++)
	{
	count=0;
	scanf("%d",&num);
	i=5;
	while(num/i!=0)
	{
		count=count+num/i;//calculating divisibles (of a power of 5) between 1 and given number
		i=i*5;//next power
	}
	printf("%d\n",count);
	}
	return 0;
}
