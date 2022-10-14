/*prg4
 *	1
 *	1	2
 *	1	2	3
 *	1	2
 *	1
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		if(i<=row/2){
			for(int j=1; j<=i; j++){
				printf("%d\t",j);
			}
			printf("\n");
		}else{
			int x=1;
			for(int j=row; j>=i; j--){
				printf("%d\t",x++);
			}
			printf("\n");
		}
	}
}
