#include<stdio.h>
int ifprime(int a);
int sum(int a);
int main()
{
	int a=100000000-1,b,d=0;
	while (a>1)
	{
		b=sum(a);
		if (b>14) a=a-(b-14)+1;
		if (b<14) a=a/10*10;
		if (b==14)
		{
			if (!ifprime(a)) d++;
		}
		a--;
	}
	printf("%d",d);
	return 0;
}
int ifprime(int a)
{
	int b=2;
	for (b=2;b<(a/2);b++)
	{
		if (a%b == 0 ) return 1;
	}
	return 0;
}
int sum(int a)
{
	int b=0;
	while (a!=0)
	{
		b+=a%10;
		a=a/10;
	}
	return b;
}

