/*prg7
 * WAP to print first composite no. b/w given range
 * i/p: start:20
 * 	end:30
 * o/p:20 */

#include<stdio.h>
void main(){
	int start,end,flag;
	printf("Enter start and end\n");
	scanf("%d %d", &start, &end);

	for(start; start<=end; start++){
		flag=0;
		for(int i=2; i<start; i++){
			if(start%i==0){
				flag=1;
				break;
			}
		}
		if(flag==1){
			printf("First composite no. is = %d\n",start);
			break;
		}
	}
	if(flag==0){
		printf("There is no any composite no.\n");
	}
}
