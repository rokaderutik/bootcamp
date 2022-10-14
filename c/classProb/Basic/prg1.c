//take capital alphabet as input and print all consonant ,vowel
//A is vowel
//Bis consonant & so on in range 


#include<stdio.h>

void main(){
	char chStart,chEnd;
	printf("Enter a starting character\n");
	scanf("%c",&chStart);
	
	printf("Enter a ending character\n");
	scanf(" %c",&chEnd);

	while(chEnd>=chStart){
		if(chStart=='A' || chStart=='E' || chStart=='I' || chStart=='O' || chStart=='U'){
			printf("%c is vowel\n",chStart);
		}else{
			printf("%c is a consonant\n",chStart);
		}
		chStart++;
	}
}
