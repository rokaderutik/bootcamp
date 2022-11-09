//prg9
//perfect square root of no.s b/n 100 to 300

#include<stdio.h>
void main(){
	for(int i=100; i<=300; i++){
		for(int j=1; j<=i; j++){
			if(j*j==i){
				printf("square root of %d is %d\n",i,j);
			}
		}
	}
}
