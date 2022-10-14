/*wap to print number in reverse order by diff of 1 if input no is even & by diff of 2 if input no is odd
 * i/p:4 	
 * o/p:4 3 2 1
 * i/p:3
 * o/P:3 1
 */

#include<stdio.h>
/*
void main(){
	int no,temp;

	printf("Enter a number\n");
	scanf("%d",&no);
	temp=no;

	while(temp>0){
		if(no%2==0){
			printf("%d\t",temp);
			temp--;
		}else{
			printf("%d\t",temp);
			temp=temp-2;
		}
	}
}
*/
//or using 2 while loops
void main(){
	int n;
	printf("Enter num\n");
	scanf("%d",&n);
	if(n%2==0){
		while(n>0){
			printf("%d",n);
			n--;
		}else if(n>0){
			printf("%d",n);
			n--;
			n--;
		}
	}
}
