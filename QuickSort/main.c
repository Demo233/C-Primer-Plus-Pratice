#include <stdio.h>
int a[101],n; // ����ȫ�ֱ���
void quicksort(int left,int right)
{
	int i,j,t,temp;
	if(left>right)
	{
		return;
	}

	temp=a[left];//temp �д�ľ��ǻ�׼�� 
	i=left;
	j=right;
	while(i!=j)  //���߲��뽻��һֱѭ��
	{
		while(a[j]>=temp&&i<j)  //˳�����Ҫ �ȴ��ұ���
		{
			j--;
			//�������
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
	// i����j
	a[left]=a[i];   //�����Ϊֹͣ������
	a[i]=temp;    //ֹͣ��Ϊ��׼��
	quicksort(left,i-1);   //��ߵļ���
	quicksort(i+1,right); //�ұߵļ���
}
int main(void)
{
	int x;
	printf("��������Ҫ����ĸ���:");
	scanf("%d",&n);	
	for(x=1;x<=n;x++)
	{
		scanf("%d",&a[x]);
	}
	quicksort(1,n); //�����������

	for(x=1;x<=n;x++)
	{
		printf("%d ",a[x]);
	}
	getchar();
	return 0;
}


			
