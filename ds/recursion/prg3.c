#include <stdio.h>

int NontailDemo(int x){
	//base condition
	if(x == 1)
		return 1;
	
	//main logic
	return 3 + NontailDemo(--x);
}

void main(){
	int ret = NontailDemo(4);
	printf("%d\n", ret);
}
