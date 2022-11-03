//ways to initializing strings

#include<stdio.h>
void main(){
	char carr[]={'c','o','r','e','2','w','e','b','\0'};	//stack frame varti jaga milate
	char *str="core2web";				//RO Data madhe jaga milate

		printf("%s\n",carr);	//core2web
		printf("%s\n",str);	//core2web
		
		carr[4]='3';
		str[4]='4';		//segmentation fault as assignment of read only data
		
		printf("%s\n",carr);	//core3web
		printf("%c\n",str[4]);
}
