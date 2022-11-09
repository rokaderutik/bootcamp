//prg6
/*	= = = = = =
 *	$ $ $ $ $ $
 *	@ @ @ @ @ @
 *	= = = = = =
 *	$ $ $ $ $ $
 *	@ @ @ @ @ @
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	int cnt1=1,cnt2=2,cnt3=3;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=6; j++){
			if(i==cnt1){
				printf("=\t");
			}else if(i==cnt2){
				printf("$\t");
			}else if(i==cnt3){
				printf("@\t");
			}
		}
		printf("\n");
		if(i==cnt1){
			cnt1+=3;
		}else if(i==cnt2){
			cnt2+=3;
		}else if(i==cnt3){
			cnt3+=3;
		}
	}
}
