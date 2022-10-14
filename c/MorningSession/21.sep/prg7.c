/*prg7
 * WAP to print harshad numbers b/w given range */

#include<stdio.h>
void main(){
	int start,end;
	printf("Enter start & end\n");
	scanf("%d %d",&start,&end);
	
	int sum,rem,num;
	for(start; start<=end; start++){
		sum=0;
		num=start;
		while(num!=0){
			rem=num%10;
			sum+=rem;
			num=num/10;
		}
		if(start%sum==0){
			printf("%d\t",start);
		}
	}
}
