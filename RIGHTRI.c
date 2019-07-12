#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x1,x2,x3,y1,y2,y3;
	int d1,d2,d3;
	int count=0;
	int i;
	for (i=0;i<n;i++)
	{
	scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
	d1=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	d2=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
	d3=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
	if (d1==d2+d3||d2==d1+d3||d3==d1+d2)
	{
	count++;
	}
	}
	printf("%d",count);
	return 0; 
}
