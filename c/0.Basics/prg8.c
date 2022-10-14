//prg8

void main(){
	char ch;
	printf("Enter a character\n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90){
		printf("You entered the UPPERCASE character.");
	}else if(ch>=97 && ch<=122){
		printf("You entered the LOWERCASE character.");
	}else{
		printf("You entered character other than alphabet.");
	}
}
