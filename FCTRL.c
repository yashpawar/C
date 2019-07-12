//inefficient code
#include<stdio.h>
int main()
{
	int T;
	int num,count;
	int i,j,k;
	scanf("%d",&T);
	for (j=1;j<=T;j++)
	{
	count=0;
	scanf("%d",&num);
	for (i=5 ; i<=num;i=i+5)//loping through every number
	{
		k=i;
		while(k%5 == 0)//calculating maximum power of 5 that gives non zero integer when it divides the number.
		{
			k=k/5;
			count++;
		}
	}
	printf("%d\n",count);
	}
	return 0;
}
