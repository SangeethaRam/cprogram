#include <stdio.h>

int main(void) {
	// your code goes here
	char alpha;
	scanf("%c",&alpha);
	if((alpha>='A' && alpha<='Z')||(alpha>='a' && alpha<='z'))
	printf("\n alphabet");
	else
	printf("\n not an alphabet");
	return 0;
}
