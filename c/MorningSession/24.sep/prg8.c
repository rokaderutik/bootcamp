/*prg8
 * WAP to print palindrome no. p to given range
 * i/p 20 end:50
 * o/p:22 33 44
 */
#include<stdio.h>
void main(){
	int start,end;
	printf("Enter no. of rows\n");
	scanf("%d%d",&start,&end);

	for(start; start<=end; start++){
		int rev=0,n=start;
		while(n!=0){
			rev=rev*10+n%10;
			n=n/10;
		}
		if(rev==start){
			printf("%d\t",start);
		}
	}
}
