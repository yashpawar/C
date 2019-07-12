#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if (n<=1000 && n>=1 )
{
int arr1[3*n];
int i;
for (i=0;i<=3*n-1;i+=3)
{
scanf("%d%d",&arr1[i],&arr1[i+1]);
if (arr1[i]>=1 && arr1[i]<=10000 && arr1[i+1]>=1 && arr1[i+1]<=10000)
{
arr1[i+2]=arr1[i]+arr1[i+1];
}
else return 0;
}
for (i=2;i<=3*n-1;i+=3)
{
printf("%d\n",arr1[i]);
}
}
return 0;
}
