#include <stdio.h>
void main(){
	char pname[] = {'V','i','r','a','t','\0'};
	char *p1 = "Messi";
	char *p2 = "Nemar JR";
	char *p3 = "Messi";

	printf("%p\n%p\n%p\n", p1, p3, p2);
}
