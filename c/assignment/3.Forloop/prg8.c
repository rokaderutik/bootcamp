//prg8
//take 2 character if they are same print same ,if not same print difference

#include<stdio.h>
void main(){
	char ch1,ch2;
	int diff;
	printf("Enter char1\n");
	scanf("%c",&ch1);
	printf("Enter char2\n");
	scanf(" %c",&ch2);

	if(ch1==ch2){
		printf("%c and %c are same\n",ch1,ch2);
	}else{
		if(ch1>ch2){
			diff=ch1-ch2;
		}else{
			diff=ch2-ch1;
		}
		printf("Difference between %c and %c is = %d\n",ch1,ch2,diff);
	}
}
