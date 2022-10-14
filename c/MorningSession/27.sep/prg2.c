/*prg2
 * 	    D
 * 	  d E
 * 	D c B
 *    d E f G
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int sp=row; sp>i; sp--){
			printf("  ");
		}
		for(int j=1; j<=i; j++){
			if(i%2==1){
				if((i+j)%2==0){
					printf("%c ",63+row+j);
				}else{
					printf("%c ",97+row+j);
				}
			}else{	
				if((i+j)%2==0){
					printf("%c ",65+row-j);
				}else{
					printf("%c ",97+row-j);
				}
			}
		}
		printf("\n");
	}
}
