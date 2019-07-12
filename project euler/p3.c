#include<stdio.h>
#include<math.h>
#define num (long) 600851475143
int cprime(long n);
int main()
{
	long i,flag=0,j;
	if (num==2||num==3) printf("%ld\n",num);
	else if(num!=1)
	{
		i=5;
		while(i*i<=num&&flag==0)
		{
			if (num%i==0&&flag==0) 
			{
				if(cprime(num/i))
				{
				 	printf("%ld\n",num/i);
				 	flag=1;
				}
			}
			if (num%(i+2)==0&&flag==0) 
			{
				if(cprime(num/(i+2)))
				{
				 	printf("%ld\n",num/(i+2));
				 	flag=1;
				}
			}
			if (num%i==0&&flag==0) 
			{
				if(cprime(i))
				{
				 	j=i;
				}
			}
			if (num%(i+2)==0&&flag==0) 
			{
				if(cprime(i+2))
				{
				 	j=i+2;
				}
			}
			i=i+6;
		}
		if(flag==0) printf("%ld\n",j);
	}
	return 0;
}
int cprime(long n)
{
	if (n==1) return 0;
	if (n==2||n==3) return 1;
	if (n%2==0||n%3==0) return 0;
   	for (int i=5; i*i<=n; i=i+6) 
        	if (n%i == 0 || n%(i+2) == 0) 
        		return 0; 
	return 1;
}
