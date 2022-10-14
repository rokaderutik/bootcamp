//prg4
//*___
//_*__
//__*_
//___*

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int	j=1; j<=row; j++){
			if(i==j){
			printf("* ");
			}else{
				printf("_ ");
			}
		}
		printf("\n");
	}
}
