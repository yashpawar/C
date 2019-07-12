#include <stdio.h>
#define below 1000
int main()
{
	int sum=0,i;
	for(i=1;i<below ;i++)
	if (i%3==0||i%5==0) sum=sum+i;
	printf("%d",sum);
	return 0;
}

