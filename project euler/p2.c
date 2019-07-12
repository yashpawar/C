#include<stdio.h>
#define below 4000000
int main()
{
	long t1=1,t2=2,tn,esum=2,i;
	tn=t1+t2;
	while(tn<=below)
	{
		if (tn%2==0) esum=esum+tn;
		t1=t2;
		t2=tn;	
		tn=t1+t2;
	}
	printf("%ld",esum);
	return 0;
}
