/*Prg6
 */

#include<stdio.h>
void main(){
	int num; 
	printf("Enter no.\n");
	scanf("%d",&num);

	int rev=0,n=num;
	while(n!=0){
		rev=rev*10+n%10;
		n=n/10;
	}
	int cnt=0,rem, sum=0;
	while(rev!=0){
		cnt++;
		rem=rev%10;
		int f=1;
		for(int i=1; i<=cnt; i++){
			f=f*rem;
		}
		sum+=f;
		rev=rev/10;
	}
	if(sum==num)
		printf("%d is Disarium No.\n",num);
	else
		printf("%d is not Disarium No.\n",num);
}
