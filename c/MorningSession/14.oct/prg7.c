/*	      1
 *	    2 3 2
 *	  3 4 5 4 3
 *	4 5 6 7 6 5 4
 *	  3 4 5 4 3
 *	    2 3 2
 *	      1
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter rows\n");
	scanf("%d",&row);

	int x;
	for(int i=1; i<=row; i++){
		if(i<=(row+1)/2){
			for(int sp=(row+1)/2; sp>i; sp--){
				printf("  ");
			}
			for(int j=1; j<=2*i-1; j++){
				if(j<=i){
					printf("%d ",i+j-1);
					x=i+j-1;
				}else{
					printf("%d ",--x);
				}
			}
		}else{
			for(int sp=i; sp>row/2+1; sp--){
				printf("  ");
			}
			for(int j=1; j<=2*row+1-2*i; j++){
				if(i+j<=row+1){
					printf("%d ",row+j-i);
					x=row+j-i;
				}else{
					printf("%d ",--x);
				}
			}
			
		}
		printf("\n");
	}
}
