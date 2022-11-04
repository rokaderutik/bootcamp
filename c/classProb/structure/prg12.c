//Array of structure

#include<stdio.h>

struct player{
	char pName[20];
	int jerNo;
	float rev;
};

void main(){
	struct player obj1={"Virat",18,980.58};
	struct player obj2={"Messi",10,4580.23};
	struct player obj3={"James",6,9800.12};

	//array of structure
	struct player arr[3]={obj1,obj2,obj3};

	for(int i=0; i<3; i++){
		printf("%s\n",arr[i].pName);
		printf("%d\n",arr[i].jerNo);
		printf("%f\n",arr[i].rev);
	}
}
