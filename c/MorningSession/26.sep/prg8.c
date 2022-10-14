/*prg8
 * WAP to print STRONG no b/w given range
 * i/p:start 100
 * 	end:1000
 * o/p: 145
 */
#include<stdio.h>
void main(){
	int start,end;
	printf("Enter start and end\n");
	scanf("%d %d",&start,&end);

	for(start; start<=end; start++){	
		int rem,sum=0,n=start;
		while(n!=0){
			int f=1;
			rem=n%10;
			if(rem==0){
				f=1;
			}else{
				for(int i=rem; i>=1; i--){
					f=f*i;
					}
			}
			sum+=f;
			n=n/10;
		}
		if(start==sum){
			printf("%d is a STRONG no\n",start);
		}
	}
}
