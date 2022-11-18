//return multiple values
//only one value/expression can be return
#include <stdio.h>
int retVal(int);
void main(){
	int x = 10;

	int ret = retVal(x);

	printf("%d\n", ret);	//z=30
}
int retVal(int x){
	int y = x + 10;
	int z = y + 10;

	return x,y,z;
}
