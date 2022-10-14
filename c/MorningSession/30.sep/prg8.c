/*prg8
 */

#include<stdio.h>
void main(){
	int num; 
	printf("Enter no.\n");
	scanf("%d",&num);

	int n=num;

	for(int i=2; i<=n/2; i++){
		int j=n-i;
		int flag1=0, flag2=0;
		for(int k=2; k<i; k++){
			if(i%k==0){
				flag1=1;
				break;
			}
		}
		for(int k=2; k<j; k++){
			if(j%k==0){
				flag2=1;
				break;
			}
		}
		if(flag1==0 && flag2==0){
			printf("%d=%d+%d\n",num,i,j);
			break;
		}
		j--;
	}
}
