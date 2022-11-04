//Nested structure
//Type1
#include<stdio.h>
#include<string.h>

struct movieInfo{
	char actor[10];
	float imdb;
};

struct movie{
	char mName[20];
	struct movieInfo obj1;
};

void main(){
	struct movie obj2;

	strcpy(obj2.mName,"kantara");
	strcpy(obj2.obj1.actor,"Rishab");
	obj2.obj1.imdb=9.7;

	printf("%s\n",obj2.mName);
        printf("%s\n",obj2.obj1.actor);
        printf("%f\n",obj2.obj1.imdb);

}
