/*prg3	row=4
 *	3	b	2	d
 *	b	2	d
 *	1	d
 *	d
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int x=row-i;
		for(int j=row; j>=i; j--){
			if((i+j)%2==0){
				printf("%c\t",96+i+row-j);
			}else{
				printf("%d\t",x);
				x--;
			}
		}
		printf("\n");
	}
}
