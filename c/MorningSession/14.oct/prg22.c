#include<stdio.h>
#include<string.h>
void main(){
	int n;
	printf("Enter string lenght\n");
	scanf("%d",&n);

	char s[n];
	printf("Enter a string\n");
	scanf("%s",s);
	
	int stringlen=strlen(s);
	printf("%s",strrev(s));

	if(stringlen%2==0){
		if(strcmp(s,strrev(s))==0){
			printf("true");
		}else{
			printf("false");
		}
	}else{
		printf("false\n");
	}

}
