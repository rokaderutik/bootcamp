/*prg4
 */
#include<stdio.h>
void main(){
	int row; 
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	int x=1;
	if(row%2==1)
		x=0;

	for(int i=1; i<=row; i++){
		if(i<=(row+1)/2){
			if(i<=(row+3)/4){
				for(int j=1; j<=i; j++){
					printf("* ");
				}
			}else{
				for(int j=1; j<=(row+3)/2-i; j++){
					printf("* ");
				}
			}
		}else{
			if(i<=row-2){
				for(int j=x; j<=(2*i-row)/2; j++){
					printf("* ");
				}
			}else{
				for(int j=x; j<=row+1-i; j++){
					printf("* ");
				}
			}
		}
		printf("\n");
	}
}
