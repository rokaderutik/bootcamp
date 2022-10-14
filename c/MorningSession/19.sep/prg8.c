/*WAP to print first prime no in given range
 * I/p:enter start=20
 *     enter end=30
 *    o/p:first prime no=23
 */
#include<stdio.h>
void main(){
	int start,end,flag;
	printf("Enter start and end\n");
	scanf("%d %d",&start, &end);

	for(start; start<=end; start++){
		flag=0;
		for(int j=2; j<start; j++){
			if(start%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("First prime is = %d\n",start);
			break;
		}
	}
	if(flag==1){
		printf("There is no any prime no. in given range\n");
	}
}
