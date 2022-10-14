//prg6
/* = = = =
 * $ $ $ $
 * = = = =
 * $ $ $ $
 */

#include<stdio.h>

void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=4; j++){
			if(i%2==0){
				printf("$ ");
			}else{
				printf("= ");
			}
		}
		printf("\n");
	}
}
