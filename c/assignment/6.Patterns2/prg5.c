//prg5
/* D C B A
 * e d c b
 * F E D C
 * g f e d
 */

#include<stdio.h>

void main(){
	
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	char ch1='D', ch2='d', ch1_copy,ch2_copy;

	for(int i=1; i<=row; i++){
		ch1_copy=ch1;
		ch2_copy=ch2;
		for(int j=1; j<=4; j++){
			if(i%2==1){
				printf("%c ",ch1_copy);
				ch1_copy--;
			}else{
				printf("%c ",ch2_copy);
				ch2_copy--;
			}
		}
		printf("\n");
		ch1++;
		ch2++;
	}
}
