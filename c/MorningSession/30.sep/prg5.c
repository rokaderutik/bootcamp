/*prg5
 */
#include<stdio.h>
void main(){
	int row; 
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int x=0;
	for(int i=1; i<=row; i++){
		x+=i;
		for(int j=1; j<=row+1-i; j++){
			if(j==row+1-i){
				printf("%d\t",x);
			}else{
				printf("%d\t",x);
				x=x+i+j;
			}
		}
		printf("\n");
	}
}
