/* prg4  wap to print number of days in month*/

#include<stdio.h>

void main(){
	int month;
	printf("Enter a month\n");
	scanf("%d",&month);

	switch(month){
		case 1:
			printf("31 days in jan");
			break;
		case 2:
			printf("28  0r 29 days in feb");
			break;
		case 3:
			printf("31 days in mar");
			break;
		case 4:
			printf("30 days in apr");
			break;
		case 5:
			printf("31 days in may");
			break;
		case 6:
			printf("30 days in jun");
			break;
		case 7:
			printf("31 days in jul");
			break;
		case 8:
			printf("31 days in aug");
			break;
		case 9:
			printf("30 days in sep");
			break;
		case 10:
			printf("31 days in oct");
			break;
		case 11:
			printf("30 days in nov");
			break;
		case 12:
			printf("31 days in dec");
			break;
		default:
			printf("Wrong input");

	}
}
