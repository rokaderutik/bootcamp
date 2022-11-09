///prg3
//print all composite no.s b/n range
#include<stdio.h>
void main(){
	int start, end;
	printf("Enter start and end\n");
	scanf("%d %d",&start,&end);

	for(int i=start; i<=end; i++){
		for(int j=2; j<i; j++){
			if(i%j==0){
				printf("%d\t",i);
				break;
			}
		}
	}
}
