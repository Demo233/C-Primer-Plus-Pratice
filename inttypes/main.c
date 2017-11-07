#include <stdio.h>
#include <inttypes.h> //支持可移植整数类型名
int main(void)
{
	int32_t me32;  //me32是一个32位有符号整型变量
	me32=45933945;
	printf("%d \n",me32);
	printf("%" PRId32"",me32); //PRId32字符串宏
	getchar();
	return 0;
}
