#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000;//int 为 32 位 short 为16 位的系统
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
