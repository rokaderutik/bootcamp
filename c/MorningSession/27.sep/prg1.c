/*prg1
 *	A b C d E
 *	  e D c B
 *	    B c D
 *	      d C
 *	        C
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter rows\n");
	scanf("%d",&row);

	char ch1='A',ch2='a';
	for(int i=1; i<=row; i++){
		for(int sp=1; sp<i; sp++){
			printf("  ");
		}
		for(int j=1; j<=row+1-i; j++){
			if(i%2==1){
				if((i+j)%2==0){
					printf("%c ",ch1);
				}else{
					printf("%c ",ch2);
				}
				ch1++;
				ch2++;
			}else{
				if((i+j)%2==0){
					printf("%c ",ch1);
				}else{
					printf("%c ",ch2);
				}
				ch1--;
				ch2--;
			}
		}
		printf("\n");
		if(i%2==1){
			ch1--;
			ch2--;
		}else{
			ch1++;
			ch2++;
		}
	}
}
