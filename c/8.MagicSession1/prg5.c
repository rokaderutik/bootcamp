//prg5
//	2	3	5
//	7	11	13
//	17	19	23

#include<stdio.h>
void main(){
	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	int  x=2;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=3;){
				if(x==2){
					printf("%d\t",x);
					j++;
				}else{
					int flag=0;
					for(int k=2; k<x; k++){
						if(x%k==0){
							flag=1;
							break;
						}
					}
					if(flag==0){
						printf("%d\t",x);
						j++;
					}
				}
				x++;
		}
		printf("\n");
	}
}
