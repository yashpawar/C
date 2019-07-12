#include<stdio.h>
int main()
{
	int i,j,flag;
	int T;
	char s[100001];
	scanf("%d",&T);
	for (i=0;i<T;i++)
	{
		scanf("%s",s);
		j=0;
		flag=0;
		while(s[j+2]!='\0')
		{
			if(s[j]=='0' && s[j+1]=='1' && s[j+2]=='0' || s[j] == '1' && s[j+1] == '0' && s[j+2] == '1')
	    		{
				flag=1;
				break;
	    		}
			j++;
		}
		if (flag==1) printf("Good\n");
		else printf("Bad\n");
	}
	return 0;
}
