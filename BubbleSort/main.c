#include <stdio.h>
int main(void)
{
	//定义输入的个数最多有多少个
	int a[100],i,j,t,n;
	printf("请输入你想排序的个数:");
	scanf("%d",&n);
	//循环 n 个数到数组中
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	//n个数的排序，只进行 n-1 次
	for(i=1;i<=n-1;i++)
	{	//这个 for 循环进行比较的次数 比如： 三个数 第一趟： 比较 3-1次 第二趟：3-2 
		// j表示的是数的位置
		for(j=1;j<=n-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	//输出结果
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	getchar();
	return 0;
}
