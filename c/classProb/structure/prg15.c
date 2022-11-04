//Nested structure
//Type3
//Imp

#include<stdio.h>
#include<string.h>

struct movie{
	char mName[20];
	struct movieInfo{
		char actor[10];
		float imdb;
	}obj1;
};

void main(){
	struct movie obj2;
	
	//way 1 of assignment
	strcpy(obj2.mName,"Thumbhad");		
	strcpy(obj2.obj1.actor,"Sohan");
	obj2.obj1.imdb=8.5;

	printf("%s\n",obj2.mName);
        printf("%s\n",obj2.obj1.actor);
        printf("%f\n",obj2.obj1.imdb);


	//way 2 of assignment
	struct movie obj3={"kantara",{"Rishab",9.7}};

	printf("%s\n",obj3.mName);
        printf("%s\n",obj3.obj1.actor);
        printf("%f\n",obj3.obj1.imdb);

}
