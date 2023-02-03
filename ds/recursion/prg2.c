#include <stdio.h>

int tailDemo(int x){
	//base condition
	if(x == 1)
		return 1;
	
	//main logic
	return tailDemo(--x);
}

void main(){
	int ret = tailDemo(4);
	printf("%d\n", ret);
}
