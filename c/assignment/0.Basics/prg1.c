//prg1:

#include<stdio.h>
void main(){
	int num;
	char chr;
	float rs;
	double crMoney;
	
	printf("Enter a integer\n");
	scanf("%d",&num);
	
	printf("Enter a character\n");
	scanf(" %c",&chr);
	
	printf("Enter a amount(float value)\n");
	scanf("%f",&rs);
	
	printf("Enter a double value\n");
	scanf("%lf",&crMoney);
	
	printf("\nnum =%d\t",num);
	printf("size of num = %d\n",sizeof(num));
	printf("\nchr =%c\t",chr);
	printf("size of chr = %d\n",sizeof(chr));
	printf("\nrs =%f\t",rs);
	printf("size of rs = %d\n",sizeof(rs));
	printf("\ncrMoney =%lf\t",crMoney);
	printf("size of crMoney = %d",sizeof(crMoney));
}
