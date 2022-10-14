/*                 D
 *               C D E
 *             B C D E F
 *           A B C D E F G
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter row\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<row+i; j++){
			if(j<=row-i){
				printf("  ");
			}else{
				printf("%c ",64+j);
			}
		}
		printf("\n");
	}
}
