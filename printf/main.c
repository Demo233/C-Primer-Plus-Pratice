#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000;//int Ϊ 32 λ short Ϊ16 λ��ϵͳ
	short end =200;
	long big = 65537;
	long long verybig=12345678909;
	
	printf("un = %u and not %d\n",un,un);
	printf("end = %hd and end %d\n",end,end);
	printf("big = %ld and big %hd\n",big,big);
	printf("verybig = %lld and not %ld\n",verybig,verybig);
	getchar();
	return 0;
}
