//prg7
//LCM of 2 no
//
#include<stdio.h>
void main(){
	int n1,n2,max;
	printf("Enter two no.s n1 and n2\n");
	scanf("%d %d",&n1,&n2);
	if(n1>n2){
		max=n1;
	}else{
		max=n2;
	}
	for(int i=max; i<=n1*n2; i++){
		if(i%n1==0 && i%n2==0){
			printf("LCM of %d & %d = %d\n",n1,n2,i);
			break;
		}
	}
}
