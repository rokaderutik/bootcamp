//prg10
/*	D1	C2	B3	A4
 *	e5	f4	g3	h2
 *	F3	E4	D5	C6
 *	g7	h6	i5	j4
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	//combine code no. + char
	
	int n=1;
	char ch1='D',ch2='f';

	for(int i=1; i<=row; i++){
		for(int j=1; j<=4; j++){
			if(i%2==1){
				printf("%c%d\t",ch1,n);
				ch1--;
				n++;
			}else{
				printf("%c%d\t",ch2,n);
				ch2++;
				n--;
			}
		}
		printf("\n");
		if(i%2==0){
			n+=2;
		}
		ch1+=3;
		ch2--;
	}
	
	
//no. pattern	
/*	
	char ch1='D', ch2='f';
	for(int i=1; i<=row; i++){
		for(int j=1; j<=4; j++){
			if(i%2==1){
				printf("%c\t",ch1);
				ch1--;
			}else{
				printf("%c\t",ch2);
				ch2++;
			}
		}
		printf("\n");
		ch1+=3;
		ch2--;
	}
*/
//character pattern
/*	int n=1;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=4; j++){
			if(i%2==1){
				printf("%d\t",n);
				n++;
			}else{
				printf("%d\t",n);
				n--;
			}
		}
		printf("\n");
		if(i%2==0){
			n+=2;
		}
	}*/
}
