//prg10
/*D4	C3	B2	A1
 *A1 	B2	C3	D4
  D4	C3	B2	A1
  A1	B2	C3	D4
*/

#include<stdio.h>

void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	int x=4;
	char ch='D';
	for(int i =1; i<=row; i++){
		for(int j=1; j<=4; j++){
			if(i%2==0){
				ch++;
				x++;
				printf("%c%d\t",ch,x);
			}else{
				printf("%c%d\t",ch,x);
				ch--;
				x--;
			}
		}
		printf("\n");
	}
}

