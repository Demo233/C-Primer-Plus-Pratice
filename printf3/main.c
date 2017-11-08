#include <stdio.h>
int main (void)
{
	float a=32000.0;
	double b=2.14e9;
	long double c=5.5e-6;
	printf("%f  &  %e \n",a,a);
	printf("%f  & %e \n",b,b);
	printf("%Lf & %Le \n",c,c);

	float toobig=3.4E38*100.0f;
	printf("%e\n",toobig);  //…œ“Á
	getchar();
	return 0;
}
