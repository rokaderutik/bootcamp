/*	17	15	13
 *	11	9	7
 *	5	3	1
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int num=row*6;

	for(int i=1; i<=row; i++){
		for(int j=1; j<=3; ){
			if(num%2==1){
				printf("%d\t",num);
				j++;
			}
			num--;
		}
		printf("\n");
	}
}
