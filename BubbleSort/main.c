#include <stdio.h>
int main(void)
{
	//��������ĸ�������ж��ٸ�
	int a[100],i,j,t,n;
	printf("��������������ĸ���:");
	scanf("%d",&n);
	//ѭ�� n ������������
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	//n����������ֻ���� n-1 ��
	for(i=1;i<=n-1;i++)
	{	//��� for ѭ�����бȽϵĴ��� ���磺 ������ ��һ�ˣ� �Ƚ� 3-1�� �ڶ��ˣ�3-2 
		// j��ʾ��������λ��
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
	//������
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	getchar();
	return 0;
}
