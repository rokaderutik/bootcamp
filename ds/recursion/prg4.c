//factorial
//tail recursive
#include <stdio.h>

int fact(int x){
	static int f = 1;
	//base condition
	if(x == 1 || x == 0)
		return f;
	
	//main logic
	f = f*x;
	return fact(--x);
}

void main(){

	int ret = fact(4);
	printf("%d\n", ret);

}
