#include <stdio.h>
int main()
{
	int T;
	char str[1001];
	scanf("%d",&T);
	int i,j,len,c,avoid;
	for (c=1;c<=T;c++)
	{
	scanf("%s",str);
	for (i=0;(i<1001) && (str[i]!='\0');i++) len=i;
	len++;
	int countl=0,countr=0,flag;
	flag=0;
	for (j=0;j<len;j++)
	{
	avoid=len+1;
	if (len%2 != 0) avoid=len/2;
	for (i=0;i<len;i++)
	{
		if (i!= avoid)
		if (str[j] == str[i])
			if (i<=len/2-1) 
				countl++;
			else
				countr++;
				
	}
	if (countl != countr) flag=1;
	}
	if (flag == 1) printf("NO\n");
	else printf("YES\n");
	}
	return 0;
}
