/*prg2 WAP to print addition of 1-10 with 10-1 */

#include<stdio.h>

void main(){
	for( int i=1,j=10; i<=10,j>=1; i++,j--){
		printf("%d + %d = %d\n",i,j,i+j);
	}
}
