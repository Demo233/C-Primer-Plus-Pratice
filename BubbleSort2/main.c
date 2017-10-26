#include <stdio.h>
struct student
{
	char name[21];
	char score;
}; //创建结构体储存姓名和分数
int main(void)
{
	struct student a[100],t;
	int i, j , n;
	printf("请输入要排序的数目: \n");
	scanf("%d",&n);
	//循环读入姓名和分数
	for(i=1;i<=n;i++)
	{
		scanf("%s %d",a[i].name,&a[i].score);
	}

	//循环遍历的趟数
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(a[j].score<a[j+1].score)
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	//输出排序后的名字
	for(int i=1;i<=n;i++)
	{
		printf("%s \n",a[i].name);
	}
	return 0;
}
