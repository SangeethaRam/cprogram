#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	printf("\n %d is greater",a);
	else if((b>a)&&(b>c))
	printf("\n %d is greater",b);
	else
	printf("\n %d is greater",c);
	return 0;
}
