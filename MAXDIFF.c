#include<stdio.h>
void bubblesort(int *a,int len);
int main()
{
	int T;
	int N,K;
	int i;
	int sk,ts,diff;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&N,&K);
		int l[N];
		for(i=0;i<N;i++)
		scanf("%d",&l[i]);
		bubblesort(l,N);
		
		sk=0;
		ts=0;
		if (K>N-K) K=N-K;
		for(i=0;i<N;i++)
		{
			ts=ts+l[i];
			if (i<K) sk=sk+l[i];
		}
		diff=ts-2*sk;
		printf("%d\n",diff);
	
	}
	return 0;
}
void bubblesort(int *a,int len)
{
	int i,j,temp;
	for(j=len;j>0;j--)
	for(i=0;i<j-1;i++)
	{
		if(*(a+i+1)<*(a+i))
		{
			temp=*(a+i);
			*(a+i)=*(a+i+1);
			*(a+i+1)=temp;
		}
		
	}
}
