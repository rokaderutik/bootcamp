/*prg2
 */
#include<stdio.h>
void main(){
	int row; 
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		if(i<=(row+1)/2){
			for(int j=(row+1)/2-i; j<=(row-1)/2; j++){
				printf("%d ",j);
			}
		}else{
			for(int j=i-(row+1)/2; j<=(row-1)/2; j++){
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}
