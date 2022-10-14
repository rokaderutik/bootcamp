/*prg8
 * WAP to print  amstrong no.s in given range
 * i/p:start end
 * o/p:
 *Amstrong no is equal to sum of digits to power total no count
 eg. 371
 count =3  3^3 + 7^3 + 1^3 ==371
 */
#include<stdio.h>
void main(){
	int start,end;
	printf("Enter a start and end\n");
	scanf("%d %d",&start,&end);
	
	for(start; start<=end; start++){
	int n=start,n1=start;
	int cnt=0;
	while(n!=0){
		cnt++;
		n=n/10;
	}
	int rem,sum=0;
	while(n1!=0){
		int f=1;
		rem=n1%10;
		for(int i=1; i<=cnt; i++){
			f=f*rem;
		}
		sum+=f;
		n1=n1/10;
	}
	if(sum==start){
		printf("%d\n",start);
	}
	}
}
