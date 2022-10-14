/*prg3
 */
#include<stdio.h>
void main(){
	int row; 
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int x=1;
	for(int i=1; i<=row; i++){
		if(i<=(row+1)/2){
			for(int sp=(row+1)/2; sp>i; sp--){
				printf(" \t");
			}
			for(int j=1; j<=i; j++){
				printf("%d\t",x++);
			}
		}else{
			for(int sp=row/2+1; sp<i; sp++){
				printf(" \t");
			}
			for(int j=1; j<=row+1-i; j++){
				printf("%d\t",x++);
			}
		}
		printf("\n");
	}
}
