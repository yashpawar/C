#include<stdio.h>
int main()
{
	int a,n,k;
	scanf("%d %d %d",&a,&n,&k);
	int chamber[k];
	unsigned long div;
	int i,j;
	for (i=0;i<k;i++) chamber[i]=0;
	div=1;
	for (i=0;i<k;i++)
	{
		chamber[i]=(a/div)%(n+1);
		div=div*(n+1);
	}
	for (i=0;i<k;i++) printf("%d ",chamber[i]);
	return 0;
}
