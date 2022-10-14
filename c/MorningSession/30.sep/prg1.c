/*prg1
 */
#include<stdio.h>
void main(){
	int row; 
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int x=row*(row+1)/2;
	for(int i=1; i<=row; i++){
		for(int sp=row; sp>i; sp--){
			printf(" \t");
		}
		for(int j=1; j<=i; j++){
			if(row%2==0){
				if(i%2==0){
					printf("%c\t",64+x);
				}else{
					printf("%d\t",x);
				}
			}else{
				if(i%2==1){
					printf("%c\t",64+x);
				}else{
					printf("%d\t",x);
				}
			}
			x--;
		}
		printf("\n");
	}
}
