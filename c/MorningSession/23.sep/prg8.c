/*prg8
 * WAP to print PERFECT no in given range */

#include<stdio.h>
void main(){
	int start,end;
	printf("Enter a start and end\n");
	scanf("%d %d",&start, &end);

	for(start; start<=end; start++){
		int sum=0;
		for(int i=1; i<=start/2; i++){
			if(start%i==0){
				sum+=i;
			}
		}
		if(start==sum){
			printf("%d\n",start);
		}
	}
}
