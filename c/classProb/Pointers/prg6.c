#include<stdio.h>
void main(){
	char x='A';
	char y='B';

	char *ptr1=&x;
	char *ptr2=&y;

	printf("%d\n",*ptr1 + *ptr2);
	//printf("%p\n",ptr1 + ptr2);	//error
	
	char ch=127;
	ch=ch+1;
	printf("%d\n",ch);	//-128		round off -128 to +127 char range

	char ch2=127;		//	no need to round off as in range
	printf("%d\n",ch2 + 1);	//128	at run time(printf() is fxn call come at run time) it will not round off
	
	char ch3=128;		//-127		round off 
	printf("%d\n",ch3+2);	//-126
}
