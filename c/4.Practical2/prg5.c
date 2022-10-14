//prg5
/*WAP to print all even numbers in reverse order and odd numbers in standard way.both seperately.whithin a range
 * start=2
 * end=9
 * o/p:
 * 8 6 4 2
 * 3 5 7 9*/

#include<stdio.h>

void main(){
	int start,end,temp;
	printf("Enter start\n");
	scanf("%d",&start);

	printf("Enter end\n");
	scanf("%d",&end);

	temp=end;
	
	for(end; end>=start; end--){
		if(end%2==0){
			printf("%d\t",end);
		}
	}
	printf("\n");
	for(start; start<=temp; start++){
		if(start%2==1){
			printf("%d\t",start);
		}
	}
}

