#include<stdio.h>
int main()
{
	int a=100,b=2,c=0,d=0;
	for(;a<1000;a++)
	{
		d=0;
		for (b=2;b<a;b++)
		{
			if (a%b == 0 ) d=1;
		}
		if (!d) c++;
	}
	printf("%d",c);
	return 0;
}
