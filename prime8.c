#include<stdio.h>
int main()
{
	int d=1;
	int a=100000000,b=2,c;
	c=a;
	for(;d;a--)
	{
		d=0;
		for (b=2;b<(a/2);b++)
		{
			if (a%b == 0 ) d=1;
		}
		if (d == 0)
		{
			c=a;
		}
	}
	printf("%d\n",c);
	return 0;
}
