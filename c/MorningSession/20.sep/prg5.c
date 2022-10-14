/*prg5
 * 	D	C	B	A
 * 	e	f	g	h
 * 	F	E	D	C
 * 	g	h	i	j
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=row; j++){
			if(i%2==0){
				printf("%c\t",94+row+i+j);
			}else{
				printf("%c\t",64+row+i-j);
			}
		}
		printf("\n");
	}
}
