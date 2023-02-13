#include <stdio.h>

auto int a;
register int b;
void main(){
	register int x=10;
	printf("%p\n", &x);
}
