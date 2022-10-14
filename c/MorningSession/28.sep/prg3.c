/*prg3
 * 1
 * 3 1
 * 5 3 1
 * 3 1
 * 1
 */ 
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		if(i<=(row+1)/2){
			for(int j=2*i-1; j>=1; j=j-2){
				printf("%d ",j);
			}
		}else{
			for(int j=2*row+1-2*i; j>=1; j=j-2){
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}
