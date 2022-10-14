/*      4
 *    3 3
 *  2 2 2
  1 1 1 1
    2 2 2
      3 3
        4
*/
#include<stdio.h>
void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);
	
	for(int i=1; i<=row; i++){
		if(i<=(row+1)/2){
			for(int sp=(row+1)/2; sp>i; sp--){
				printf("  ");
			}
			for(int j=1; j<=i; j++){
				printf("%d ",(row+1)/2+1-i);
			}
		}else{
			for(int sp=row/2+1; sp<i; sp++){
				printf("  ");
			}
			for(int j=1; j<=row+1-i; j++){
				printf("%d ",i-row/2);
			}
		}
		printf("\n");
	}
}
