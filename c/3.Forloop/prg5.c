//prg5
//print all factors of no.

#include<stdio.h>
void main(){
	int num;
	printf("Enter a no.\n");
	scanf("%d",&num);
	for(int i=1; i<=num; i++){
		if(num%i==0){
			printf("%d ",i);
		}
	}
}
