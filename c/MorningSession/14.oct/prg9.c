/*	* * * *
 *	  * * *
 *	    * *
 *	      *
 *	    * *
 *	  * * *
 *	* * * *
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter rows\n");
	scanf("%d",&row);
	
	int n=(row+1)/2;
	for(int i=1; i<=row; i++){
		if(i<=n){
			for(int j=1; j<=n; j++){
				if(j<i){
					printf("  ");
				}else{
					printf("* ");
				}
			}
		}else{
			for(int j=row; j>=row/2+1; j--){
				if(j>i){
					printf("  ");
				}else{
					printf("* ");
				}
			}
		}
		printf("\n");
	}
}
