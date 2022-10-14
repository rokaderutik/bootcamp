//prg3
//print all even no in reverse order & odd in standard way
//
#include<stdio.h>

void main(){
	int start,end;
	printf("Enter start \n");
	scanf("%d",&start);
	printf("Enter end\n");
	scanf("%d",&end);

	for(int i=end; i>=start; i--){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	printf("\n");
	for(int i=start; i<=end; i++){
		if(i%2==1){
			printf("%d ",i);
		}
	}
}
