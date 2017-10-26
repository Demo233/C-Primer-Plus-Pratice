
#include <stdio.h>
int main(void)
{
	int a[101],i,j,t;
	for(i=0;i<=100;i++)
		a[i]=0;//³õÊ¼»¯Îª0
	for(i=1;i<=5;i++)
	{
		scanf("%d",&t);
		a[t]++;
	}
	for(i=100;i>=0;i--)
	{
		for(j=1;j<=a[i];j++)
			printf("%d ",i);
	}
	getchar();
	getchar();
}
