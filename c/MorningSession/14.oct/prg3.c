/*            D
 *          C D E
 *        B C D E F
 *      A B C D E F G
 *        B C D E F
 *          C D E 
 *            D
 */
#include<stdio.h>
void main(){
	int row;
	printf("enter row\n");
	scanf("%d",&row);

	int n=(row+1)/2,m=row/2+1,x;
	for(int i=1; i<=row; i++){
		if(i<=n){		//upper half
			x=n+i;
		}else{			//lower half
			if(i==m)
				x=row;
			else
				x--;
		}
		for(int j=1; j<x; j++){
			if(i<=n){		//upper half
				if(j<=n-i){
					printf("  ");
				}else{
					printf("%c ",64+j);
				}
			}else{			//lower half
				if(j<=i-m){
					printf("  ");
				}else{
					printf("%c ",64+j);
				}
			}
		}
		printf("\n");
	}
}
