/*prg5
 * 1
 * 1   4
 * 4   7  10
 * 10  13 16  19
 * 19  22 25
 * 25  28
 * 28
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int x=1;
	for(int i=1; i<=row; i++){
		if(i<=(row+1)/2){
			for(int j=1; j<=i; j++){
				printf("%d\t",x);
				x+=3;
			}
		}else{
			for(int j=1; j<=row+1-i; j++){
				printf("%d\t",x);
				x+=3;
			}
		}
		printf("\n");
		x-=3;
	}
}
