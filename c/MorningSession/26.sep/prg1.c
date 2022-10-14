/*prg1
 *	A	b	C	d
 *		d	E	f
 *			F	g
 *				g
 */
#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	char ch1='A',ch2='a';
	for(int i=1; i<=row; i++){
		for(int sp=1; sp<i; sp++){
			printf("  ");
		}
		for(int j=1; j<=row-i; j++){
			if((i+j)%2==0){
				printf("%c ",ch2);
			}else{
				printf("%c ",ch1);
			}
			ch1++;
			ch2++;
		}
		printf("\n");
		ch1--;
		ch2--;
	}
}
