/* print no of factors of number */

#include<stdio.h>

void main(){
	int num,count=0;
	printf("Enter a number\n");
	scanf("%d",&num);

	for(int i=1; i<=num; i++){
		if(num%i==0){
			count++;
		}
	}
	printf("%d has %d factors",num,count);

}
