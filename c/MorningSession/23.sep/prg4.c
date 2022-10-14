/*prg4
 *	5
 *	5	d
 *	5	d	4
 *	5	d	4	b
 *	5	d	4	b	3
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter a no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int x=row;
		for(int j=1; j<=i; j++){
			if(j%2==0){
				printf("%c\t",97+row-j);
			}else{
				printf("%d\t",x);
				x--;
			}
		}
		printf("\n");
	}
}
