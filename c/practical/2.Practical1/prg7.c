/* take 3 angles and check whether it is triangle or not */

#include<stdio.h>

void main(){
	int ang1,ang2,ang3;
	printf("Enter angle 1\n");
	scanf("%d",&ang1);
	
	printf("Enter angle 2\n");
	scanf("%d",&ang2);

	printf("Enter angle 3\n");
	scanf("%d",&ang3);

	if(ang1 + ang2 + ang3 == 180){
		printf("It is a triangle");
	}else{
		printf("It is not a triangle");
	}



}
