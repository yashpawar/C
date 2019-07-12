#include<stdio.h>
int main()
{
	int x;
	printf("Enter Number : ");
	scanf("%d",&x);
	int temp,len=0;
	temp=x;
	while(temp!=0)
	{
		temp=temp/10;
		len++;
	}
	printf("%d\n",len);
	temp=x;
	char y[len+1];
	y[len]='\0';
	len--;
	while(len>=0)
	{
		y[len]=(temp%10);
		temp=temp/10;
		len--;
	}
	printf("Entered Number = ");
	printf("%s\n",y);
	return 0;
}
