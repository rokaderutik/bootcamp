/*prg3
 * a
 * A	B
 * a	b	c
 * A	B	C	D
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			if(i%2==0){
				printf("%c\t",64+j);
			}else{
				printf("%c\t",96+j);
			}
		}
		printf("\n");
	}
}
