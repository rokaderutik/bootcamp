/*prg2
 * 1
 * 3 2 1
 * 5 4 3 2 1
 * 3 2 1
 * 1
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		if(i<=(row+1)/2){
			for(int j=1; j<=2*i-1; j++){
				printf("%d ",2*i-j);
			}
		}else{
			for(int j=1; j<=2*row+1-2*i; j++){
				printf("%d ",2*row+2-2*i-j);
			}
		}
		printf("\n");
	}
}
