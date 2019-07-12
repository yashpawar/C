#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int l[n],sum;
	int i;
	for(i=0;i<n;i++) scanf("%d",&l[i]);
	sum=0;
	for(i=0;i<n;i++) sum=sum+l[i];
	if (sum==(n*(n+1))/2) printf("YES");
	else printf("NO");
	return 0;
}
