#include <stdio.h>
int a[101],n; // 定义全局变量
void quicksort(int left,int right)
{
	int i,j,t,temp;
	if(left>right)
	{
		return;
	}

	temp=a[left];//temp 中存的就是基准数 
	i=left;
	j=right;
	while(i!=j)  //两边不想交就一直循环
	{
		while(a[j]>=temp&&i<j)  //顺序很重要 先从右边找
		{
			j--;
			//在找左边
		}
		while(a[i]<=temp && i<j)
		{
			i++;
		}
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	// i等于j
	a[left]=a[i];   //最左边为停止的数字
	a[i]=temp;    //停止的为基准数
	quicksort(left,i-1);   //左边的继续
	quicksort(i+1,right); //右边的继续
}
int main(void)
{
	int x;
	printf("请输入需要排序的个数:");
	scanf("%d",&n);	
	for(x=1;x<=n;x++)
	{
		scanf("%d",&a[x]);
	}
	quicksort(1,n); //快速排序调用

	for(x=1;x<=n;x++)
	{
		printf("%d ",a[x]);
	}
	getchar();
	return 0;
}


			
