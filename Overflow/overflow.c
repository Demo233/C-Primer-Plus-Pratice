#include <stdio.h>
int main(){
	int a=32767;
	int sum;
	sum=a+1;
	// int 有4个字节  所以 就是 32 位 溢出后 32768
	printf("%d \n",sum);
}
