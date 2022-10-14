/*prg6
 * WAP to print whether no. is composite or not */

#include<stdio.h>
void main(){
	int num;
	printf("Enter a no.\n");
	scanf("%d",&num);
	
	int flag=0;
	for(int i=2; i<num; i++){
		if(num%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("%d is composite no.\n",num);
	}else{
		printf("%d is not composite no.\n",num);
	}
}
