#include <stdio.h>
int main(void)
{
	printf("%zd \n",sizeof(int));
	printf("%zd \n",sizeof(char));
	printf("%zd \n",sizeof(long));
	printf("%zd \n",sizeof(long long));
	printf("%zd \n",sizeof(float));
	printf("%zd \n",sizeof(double));
	printf("%zd \n",sizeof(long double));
	getchar();
	return 0;
}
