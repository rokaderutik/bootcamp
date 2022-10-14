/* 4 3 2 1 2 3 4
 *   3 2 1 2 3
 *     2 1 2
 *       1
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no of rows\n");
	scanf("%d",&row);
	int x;

	for(int i=1; i<=row; i++){
		for(int sp=1; sp<i; sp++){
			printf("  ");
		}

		x=row+1-i;
		for(int j=1; j<=(2*row+1)-2*i; j++){
			if(j<row+1-i){
				printf("%d ",x);
				x--;
			}else{
				printf("%d ",x);
				x++;
			}
		}
		printf("\n");
	}
}
