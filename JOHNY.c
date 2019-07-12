#include<stdio.h>
void bubblesort(int [],int );
void swap(int *num1,int *num2);
int main()
{	
	int t,n,i,j,keyi,datai,keyf;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		int playlist[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&playlist[j]);
		}
		scanf("%d",&keyi);
		datai=playlist[keyi-1];
		bubblesort(playlist,n);
		for(j=0;j<n;j++)
		{
			if(datai==playlist[j])
			{
				keyf=j;
			}
		}
		printf("%d\n",keyf+1);		
	}
	return 0;
}

void bubblesort(int arr[],int len)
{
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}
void swap(int *num1,int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
