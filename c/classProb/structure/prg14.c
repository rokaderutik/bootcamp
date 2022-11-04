//Nested structure
//Type2
#include<stdio.h>
struct movieInfo{
        char actor[10];
        float imdb;
};

struct movie{
        char mName[20];
        struct movieInfo obj1;
};

void main(){
        struct movie obj2={"kantara",{"Rishab",9.7}};

        printf("%s\n",obj2.mName);
        printf("%s\n",obj2.obj1.actor);
        printf("%f\n",obj2.obj1.imdb);

}

